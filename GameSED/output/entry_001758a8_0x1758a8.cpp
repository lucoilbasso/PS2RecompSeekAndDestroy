#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001758a8
// Address: 0x1758a8 - 0x175934
void entry_001758a8_0x1758a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001758a8_0x1758a8");
#endif

    ctx->pc = 0x1758a8u;

    // 0x1758a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1758ac: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1758acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1758b0: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x1758b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1758b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1758b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1758b8: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1758bc: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x1758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1758c0: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x1758c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1758c4: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1758c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1758c8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1758cc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1758ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1758d0: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x1758d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1758d4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1758d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1758d8: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x1758d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x1758dc: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1758dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1758e0: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1758e4: 0x3010  mfhi        $a2
    ctx->pc = 0x1758e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1758e8: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x1758e8u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1758ec: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1758ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1758f0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1758f4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1758f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1758f8: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x1758f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1758fc: 0x3810  mfhi        $a3
    ctx->pc = 0x1758fcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x175900: 0xac001a  div         $zero, $a1, $t4
    ctx->pc = 0x175900u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175904: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x175904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x175908: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x175908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17590c: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x17590cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
    // 0x175910: 0x6580a  movz        $t3, $zero, $a2
    ctx->pc = 0x175910u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x175914: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x175914u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x175918: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x175918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x17591c: 0x1010  mfhi        $v0
    ctx->pc = 0x17591cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175920: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175920u;
    {
        const bool branch_taken_0x175920 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x175924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175920u;
        // 0x175924: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175920) {
            ctx->pc = 0x17593Cu;
            return;
        }
    }
    ctx->pc = 0x175928u;
    // 0x175928: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x175928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x17592c: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17592Cu;
    {
        const bool branch_taken_0x17592c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x17592c) {
            ctx->pc = 0x175930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17592Cu;
            // 0x175930: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175934u;
            return;
        }
    }
    ctx->pc = 0x175934u;
}
