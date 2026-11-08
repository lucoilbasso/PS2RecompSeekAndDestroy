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

// Function: entry_001ae008
// Address: 0x1ae008 - 0x1ae048
void entry_001ae008_0x1ae008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae008_0x1ae008");
#endif

    switch (ctx->pc) {
        case 0x1ae01cu: goto label_1ae01c;
        case 0x1ae038u: goto label_1ae038;
        default: break;
    }

    ctx->pc = 0x1ae008u;

label_1ae008:
    // 0x1ae008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae00c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ae00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae010: 0x240700f3  addiu       $a3, $zero, 0xF3
    ctx->pc = 0x1ae010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1ae014: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1AE014u;
    SET_GPR_U32(ctx, 31, 0x1AE01Cu);
    ctx->pc = 0x1AE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE014u;
    // 0x1ae018: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1AE014u, 0x1AE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE01Cu;
label_1ae01c:
    // 0x1ae01c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae024: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ae024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae028: 0x240700f3  addiu       $a3, $zero, 0xF3
    ctx->pc = 0x1ae028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1ae02c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1ae02cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ae030: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1AE030u;
    SET_GPR_U32(ctx, 31, 0x1AE038u);
    ctx->pc = 0x1AE034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE030u;
    // 0x1ae034: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1AE030u, 0x1AE038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE038u;
label_1ae038:
    // 0x1ae038: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1ae038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ae03c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AE03Cu;
    {
        const bool branch_taken_0x1ae03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE03Cu;
        // 0x1ae040: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae03c) {
            ctx->pc = 0x1AE008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae008;
        }
    }
    ctx->pc = 0x1AE044u;
    // 0x1ae044: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ae044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1ae048u;
}
