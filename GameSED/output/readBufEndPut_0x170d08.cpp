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

// Function: readBufEndPut
// Address: 0x170d08 - 0x170d70
void readBufEndPut_0x170d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufEndPut_0x170d08");
#endif

    ctx->pc = 0x170d08u;

    // 0x170d08: 0x3c070005  lui         $a3, 0x5
    ctx->pc = 0x170d08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5 << 16));
    // 0x170d0c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x170d10: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x170d14: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x170d14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x170d18: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x170d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x170d1c: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x170d20: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x170d24: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x170d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x170d28: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x170d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x170d2c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x170D2Cu;
    {
        const bool branch_taken_0x170d2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x170d2c) {
            ctx->pc = 0x170D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170D2Cu;
            // 0x170d30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x170D34u;
            goto label_170d34;
        }
    }
    ctx->pc = 0x170D34u;
label_170d34:
    // 0x170d34: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x170d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x170d38: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x170d38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170d3c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x170d3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x170d40: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x170d44: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x170d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x170d48: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x170d48u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x170d4c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170d50: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170d50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170d54: 0xac280004  sw          $t0, 0x4($at)
    ctx->pc = 0x170d54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 8));
    // 0x170d58: 0x1810  mfhi        $v1
    ctx->pc = 0x170d58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x170d5c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170d60: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170d60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170d64: 0xac230000  sw          $v1, 0x0($at)
    ctx->pc = 0x170d64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 3));
    // 0x170d68: 0x3e00008  jr          $ra
    ctx->pc = 0x170D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170D70u;
}
