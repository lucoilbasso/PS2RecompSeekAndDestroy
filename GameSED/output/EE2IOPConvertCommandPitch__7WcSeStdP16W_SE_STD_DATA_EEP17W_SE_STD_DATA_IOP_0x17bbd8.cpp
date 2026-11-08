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

// Function: EE2IOPConvertCommandPitch__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOP
// Address: 0x17bbd8 - 0x17bc1c
void EE2IOPConvertCommandPitch__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOP_0x17bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EE2IOPConvertCommandPitch__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOP_0x17bbd8");
#endif

    ctx->pc = 0x17bbd8u;

    // 0x17bbd8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17bbdc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x17bbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17bbe0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x17bbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x17bbe4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17bbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17bbe8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x17bbe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x17bbec: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x17bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17bbf0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17bbf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bbf8: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x17bbf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x17bbfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17bc00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17bc04: 0x8c420800  lw          $v0, 0x800($v0)
    ctx->pc = 0x17bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x17bc08: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x17bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x17bc0c: 0x473818  mult        $a3, $v0, $a3
    ctx->pc = 0x17bc0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x17bc10: 0x713c3  sra         $v0, $a3, 15
    ctx->pc = 0x17bc10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 15));
    // 0x17bc14: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC14u;
        // 0x17bc18: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC1Cu;
}
