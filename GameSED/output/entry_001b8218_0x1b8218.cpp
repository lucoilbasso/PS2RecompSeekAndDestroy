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

// Function: entry_001b8218
// Address: 0x1b8218 - 0x1b8264
void entry_001b8218_0x1b8218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8218_0x1b8218");
#endif

    switch (ctx->pc) {
        case 0x1b8220u: goto label_1b8220;
        case 0x1b8230u: goto label_1b8230;
        case 0x1b8244u: goto label_1b8244;
        default: break;
    }

    ctx->pc = 0x1b8218u;

label_1b8218:
    // 0x1b8218: 0xc06e060  jal         func_1B8180
    ctx->pc = 0x1B8218u;
    SET_GPR_U32(ctx, 31, 0x1B8220u);
    ctx->pc = 0x1B821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8218u;
    // 0x1b821c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8180u, 0x1B8218u, 0x1B8220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8220u;
label_1b8220:
    // 0x1b8220: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b8220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b8224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b8224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8228: 0xc06e064  jal         func_1B8190
    ctx->pc = 0x1B8228u;
    SET_GPR_U32(ctx, 31, 0x1B8230u);
    ctx->pc = 0x1B822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8228u;
    // 0x1b822c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8190u, 0x1B8228u, 0x1B8230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8230u;
label_1b8230:
    // 0x1b8230: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1b8230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b8234: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B8234u;
    {
        const bool branch_taken_0x1b8234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8234) {
            ctx->pc = 0x1B8238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8234u;
            // 0x1b8238: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8218;
        }
    }
    ctx->pc = 0x1B823Cu;
    // 0x1b823c: 0xc06e060  jal         func_1B8180
    ctx->pc = 0x1B823Cu;
    SET_GPR_U32(ctx, 31, 0x1B8244u);
    ctx->pc = 0x1B8240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B823Cu;
    // 0x1b8240: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8180u, 0x1B823Cu, 0x1B8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8244u;
label_1b8244:
    // 0x1b8244: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b8244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b8248: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b8248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b824c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b824cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8250: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b8250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8258: 0xac62bd38  sw          $v0, -0x42C8($v1)
    ctx->pc = 0x1b8258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24BD38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24BD38u, _value); } while (0);
    // 0x1b825c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B825Cu;
        // 0x1b8260: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8264u;
}
