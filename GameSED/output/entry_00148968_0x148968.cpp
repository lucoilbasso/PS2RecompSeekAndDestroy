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

// Function: entry_00148968
// Address: 0x148968 - 0x148990
void entry_00148968_0x148968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148968_0x148968");
#endif

    switch (ctx->pc) {
        case 0x148970u: goto label_148970;
        case 0x148988u: goto label_148988;
        default: break;
    }

    ctx->pc = 0x148968u;

label_148968:
    // 0x148968: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x148968u;
    SET_GPR_U32(ctx, 31, 0x148970u);
    ctx->pc = 0x14896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148968u;
    // 0x14896c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x148968u, 0x148970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148970u;
label_148970:
    // 0x148970: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x148970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x148974: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x148974u;
    {
        const bool branch_taken_0x148974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x148978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148974u;
        // 0x148978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148974) {
            ctx->pc = 0x148968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148968;
        }
    }
    ctx->pc = 0x14897Cu;
    // 0x14897c: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x14897cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x148980: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148980u;
    SET_GPR_U32(ctx, 31, 0x148988u);
    ctx->pc = 0x148984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148980u;
    // 0x148984: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148980u, 0x148988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148988u;
label_148988:
    // 0x148988: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x14898c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x14898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    ctx->pc = 0x148990u;
}
