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

// Function: entry_00175580
// Address: 0x175580 - 0x1755c8
void entry_00175580_0x175580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175580_0x175580");
#endif

    switch (ctx->pc) {
        case 0x1755acu: goto label_1755ac;
        default: break;
    }

    ctx->pc = 0x175580u;

    // 0x175580: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x175580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175584: 0x2543826  xor         $a3, $s2, $s4
    ctx->pc = 0x175584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
    // 0x175588: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17558c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x17558cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x175590: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x175594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175598: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x175598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17559c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1755a0: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x1755a0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x1755a4: 0xc05d440  jal         func_175100
    ctx->pc = 0x1755A4u;
    SET_GPR_U32(ctx, 31, 0x1755ACu);
    ctx->pc = 0x1755A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755A4u;
    // 0x1755a8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x1755A4u, 0x1755ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755ACu;
label_1755ac:
    // 0x1755ac: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1755b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1755b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1755b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1755b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1755b8: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x1755b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1755bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1755bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1755c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1755C0u;
    {
        const bool branch_taken_0x1755c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755c0) {
            ctx->pc = 0x1755C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1755C0u;
            // 0x1755c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1755C8u;
            return;
        }
    }
    ctx->pc = 0x1755C8u;
}
