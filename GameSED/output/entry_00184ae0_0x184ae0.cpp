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

// Function: entry_00184ae0
// Address: 0x184ae0 - 0x184b00
void entry_00184ae0_0x184ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184ae0_0x184ae0");
#endif

    switch (ctx->pc) {
        case 0x184af0u: goto label_184af0;
        default: break;
    }

    ctx->pc = 0x184ae0u;

label_184ae0:
    // 0x184ae0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x184ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ae4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x184ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x184ae8: 0xc069070  jal         func_1A41C0
    ctx->pc = 0x184AE8u;
    SET_GPR_U32(ctx, 31, 0x184AF0u);
    ctx->pc = 0x184AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AE8u;
    // 0x184aec: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x184AE8u, 0x184AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AF0u;
label_184af0:
    // 0x184af0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x184af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x184af4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x184AF4u;
    {
        const bool branch_taken_0x184af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184af4) {
            ctx->pc = 0x184AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184AF4u;
            // 0x184af8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184ae0;
        }
    }
    ctx->pc = 0x184AFCu;
    // 0x184afc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x184afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x184b00u;
}
