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

// Function: entry_0010caac
// Address: 0x10caac - 0x10cae4
void entry_0010caac_0x10caac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010caac_0x10caac");
#endif

    switch (ctx->pc) {
        case 0x10cab4u: goto label_10cab4;
        case 0x10cac0u: goto label_10cac0;
        case 0x10cae0u: goto label_10cae0;
        default: break;
    }

    ctx->pc = 0x10caacu;

    // 0x10caac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CAACu;
    SET_GPR_U32(ctx, 31, 0x10CAB4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CAACu, 0x10CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAB4u;
label_10cab4:
    // 0x10cab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cab8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CAB8u;
    SET_GPR_U32(ctx, 31, 0x10CAC0u);
    ctx->pc = 0x10CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAB8u;
    // 0x10cabc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CAB8u, 0x10CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAC0u;
label_10cac0:
    // 0x10cac0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10cac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cac4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10cac8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10cacc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cad0: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CAD0u;
    {
        const bool branch_taken_0x10cad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10cad0) {
            ctx->pc = 0x10CAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CAD0u;
            // 0x10cad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CAE4u;
            return;
        }
    }
    ctx->pc = 0x10CAD8u;
    // 0x10cad8: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x10CAD8u;
    SET_GPR_U32(ctx, 31, 0x10CAE0u);
    ctx->pc = 0x10CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAD8u;
    // 0x10cadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x10CAD8u, 0x10CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAE0u;
label_10cae0:
    // 0x10cae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10cae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10cae4u;
}
