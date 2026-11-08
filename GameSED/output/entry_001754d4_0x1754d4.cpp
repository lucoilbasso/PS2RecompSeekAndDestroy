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

// Function: entry_001754d4
// Address: 0x1754d4 - 0x175544
void entry_001754d4_0x1754d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001754d4_0x1754d4");
#endif

    ctx->pc = 0x1754d4u;

    // 0x1754d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1754d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1754d8: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1754d8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1754dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1754e0: 0x2010  mfhi        $a0
    ctx->pc = 0x1754e0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1754e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1754e8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1754ec: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1754ecu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1754f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1754f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1754f4: 0x2810  mfhi        $a1
    ctx->pc = 0x1754f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1754f8: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1754f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1754fc: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x1754fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x175500: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x175500u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175504: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x175504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x175508: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x175508u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17550c: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x17550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x175510: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x175510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175514: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x175514u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x175518: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x175518u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x17551c: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x17551cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    // 0x175520: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x175520u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175524: 0x8010  mfhi        $s0
    ctx->pc = 0x175524u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x175528: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x175528u;
    {
        const bool branch_taken_0x175528 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175528u;
        // 0x17552c: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175528) {
            ctx->pc = 0x175570u;
            return;
        }
    }
    ctx->pc = 0x175530u;
    // 0x175530: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x175530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x175534: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x175534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x175538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x175538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17553c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17553Cu;
    {
        const bool branch_taken_0x17553c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x17553c) {
            ctx->pc = 0x175540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17553Cu;
            // 0x175540: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175544u;
            return;
        }
    }
    ctx->pc = 0x175544u;
}
