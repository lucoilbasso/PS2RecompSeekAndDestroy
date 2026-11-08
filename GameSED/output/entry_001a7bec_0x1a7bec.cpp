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

// Function: entry_001a7bec
// Address: 0x1a7bec - 0x1a7c20
void entry_001a7bec_0x1a7bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7bec_0x1a7bec");
#endif

    switch (ctx->pc) {
        case 0x1a7c1cu: goto label_1a7c1c;
        default: break;
    }

    ctx->pc = 0x1a7becu;

    // 0x1a7bec: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7bf0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7bf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7bf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a7bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7c00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7c04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7c08: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7c0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7C0Cu;
    {
        const bool branch_taken_0x1a7c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C0Cu;
        // 0x1a7c10: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c0c) {
            ctx->pc = 0x1A7C20u;
            return;
        }
    }
    ctx->pc = 0x1A7C14u;
    // 0x1a7c14: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7C14u;
    SET_GPR_U32(ctx, 31, 0x1A7C1Cu);
    ctx->pc = 0x1A7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C14u;
    // 0x1a7c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7C14u, 0x1A7C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C1Cu;
label_1a7c1c:
    // 0x1a7c1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a7c20u;
}
