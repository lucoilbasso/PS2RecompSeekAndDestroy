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

// Function: entry_001a3af0
// Address: 0x1a3af0 - 0x1a3b18
void entry_001a3af0_0x1a3af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3af0_0x1a3af0");
#endif

    switch (ctx->pc) {
        case 0x1a3b10u: goto label_1a3b10;
        default: break;
    }

    ctx->pc = 0x1a3af0u;

label_1a3af0:
    // 0x1a3af0: 0xa4a60030  sh          $a2, 0x30($a1)
    ctx->pc = 0x1a3af0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 6));
label_1a3af4:
    // 0x1a3af4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1a3af8:
    // 0x1a3af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3afc:
    if (ctx->pc == 0x1A3AFCu) {
        ctx->pc = 0x1A3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF8u;
        // 0x1a3afc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B00u;
        goto label_1a3b00;
    }
    ctx->pc = 0x1A3AF8u;
    {
        const bool branch_taken_0x1a3af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF8u;
        // 0x1a3afc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3af8) {
            ctx->pc = 0x1A3B18u;
            return;
        }
    }
    ctx->pc = 0x1A3B00u;
label_1a3b00:
    // 0x1a3b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b04:
    // 0x1a3b04: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a3b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b08:
    // 0x1a3b08: 0x40f809  jalr        $v0
label_1a3b0c:
    if (ctx->pc == 0x1A3B0Cu) {
        ctx->pc = 0x1A3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B08u;
        // 0x1a3b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B10u;
        goto label_1a3b10;
    }
    ctx->pc = 0x1A3B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3B10u);
        ctx->pc = 0x1A3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B08u;
        // 0x1a3b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B08u, 0x1A3B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3B10u;
label_1a3b10:
    // 0x1a3b10: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3b14:
    if (ctx->pc == 0x1A3B14u) {
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B18u;
        goto label_fallthrough_0x1a3b10;
    }
    ctx->pc = 0x1A3B10u;
    {
        const bool branch_taken_0x1a3b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b10) {
            ctx->pc = 0x1A3B30u;
            return;
        }
    }
label_fallthrough_0x1a3b10:
    ctx->pc = 0x1A3B18u;
}
