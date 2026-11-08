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

// Function: entry_00189af8
// Address: 0x189af8 - 0x189b28
void entry_00189af8_0x189af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189af8_0x189af8");
#endif

    switch (ctx->pc) {
        case 0x189b00u: goto label_189b00;
        default: break;
    }

    ctx->pc = 0x189af8u;

label_189af8:
    // 0x189af8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x189AF8u;
    SET_GPR_U32(ctx, 31, 0x189B00u);
    ctx->pc = 0x189AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AF8u;
    // 0x189afc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x189AF8u, 0x189B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B00u;
label_189b00:
    // 0x189b00: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x189b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x189b04: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x189B04u;
    {
        const bool branch_taken_0x189b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x189B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B04u;
        // 0x189b08: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b04) {
            ctx->pc = 0x189AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189af8;
        }
    }
    ctx->pc = 0x189B0Cu;
    // 0x189b0c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x189b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x189b10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x189B10u;
    {
        const bool branch_taken_0x189b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B10u;
        // 0x189b14: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b10) {
            ctx->pc = 0x189B28u;
            return;
        }
    }
    ctx->pc = 0x189B18u;
    // 0x189b18: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x189b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x189b1c: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x189b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x189b20: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189B20u;
    SET_GPR_U32(ctx, 31, 0x189B28u);
    ctx->pc = 0x189B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B20u;
    // 0x189b24: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189B20u, 0x189B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B28u;
}
