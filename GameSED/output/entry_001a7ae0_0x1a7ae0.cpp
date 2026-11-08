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

// Function: entry_001a7ae0
// Address: 0x1a7ae0 - 0x1a7b20
void entry_001a7ae0_0x1a7ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7ae0_0x1a7ae0");
#endif

    switch (ctx->pc) {
        case 0x1a7af4u: goto label_1a7af4;
        default: break;
    }

    ctx->pc = 0x1a7ae0u;

label_1a7ae0:
    // 0x1a7ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ae4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7ae8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7aec: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7AECu;
    SET_GPR_U32(ctx, 31, 0x1A7AF4u);
    ctx->pc = 0x1A7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AECu;
    // 0x1a7af0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7AECu, 0x1A7AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AF4u;
label_1a7af4:
    // 0x1a7af4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7af8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7afc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7b00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7b04: 0x1053001c  beq         $v0, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A7B04u;
    {
        const bool branch_taken_0x1a7b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B04u;
        // 0x1a7b08: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b04) {
            ctx->pc = 0x1A7B78u;
            return;
        }
    }
    ctx->pc = 0x1A7B0Cu;
    // 0x1a7b0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7b10: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A7B10u;
    {
        const bool branch_taken_0x1a7b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a7b10) {
            ctx->pc = 0x1A7B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7B10u;
            // 0x1a7b14: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7ae0;
        }
    }
    ctx->pc = 0x1A7B18u;
    // 0x1a7b18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A7B18u;
    {
        const bool branch_taken_0x1a7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B18u;
        // 0x1a7b1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b18) {
            ctx->pc = 0x1A7B7Cu;
            return;
        }
    }
    ctx->pc = 0x1A7B20u;
}
