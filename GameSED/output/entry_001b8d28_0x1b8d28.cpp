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

// Function: entry_001b8d28
// Address: 0x1b8d28 - 0x1b8da4
void entry_001b8d28_0x1b8d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8d28_0x1b8d28");
#endif

    switch (ctx->pc) {
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d9cu: goto label_1b8d9c;
        default: break;
    }

    ctx->pc = 0x1b8d28u;

label_1b8d28:
    // 0x1b8d28: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1b8d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1b8d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d30: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x1b8d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
    // 0x1b8d34: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1b8d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8d38: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x1b8d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
    // 0x1b8d3c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b8d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b8d40: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x1b8d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8d44: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1B8D44u;
    SET_GPR_U32(ctx, 31, 0x1B8D4Cu);
    ctx->pc = 0x1B8D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8D44u;
    // 0x1b8d48: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1B8D44u, 0x1B8D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D4Cu;
label_1b8d4c:
    // 0x1b8d4c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1b8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1b8d50: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B8D50u;
    {
        const bool branch_taken_0x1b8d50 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D50u;
        // 0x1b8d54: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d50) {
            ctx->pc = 0x1B8D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8d28;
        }
    }
    ctx->pc = 0x1B8D58u;
    // 0x1b8d58: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b8d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d5c: 0x26f0d600  addiu       $s0, $s7, -0x2A00
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956544));
    // 0x1b8d60: 0xaef1d600  sw          $s1, -0x2A00($s7)
    ctx->pc = 0x1b8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294956544), GPR_U32(ctx, 17));
    // 0x1b8d64: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b8d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b8d68: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1b8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1b8d6c: 0x2484d3c0  addiu       $a0, $a0, -0x2C40
    ctx->pc = 0x1b8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
    // 0x1b8d70: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1b8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1b8d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d78: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1b8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1b8d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b8d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b8d88: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8d8c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d90: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b8d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8d94: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B8D94u;
    SET_GPR_U32(ctx, 31, 0x1B8D9Cu);
    ctx->pc = 0x1B8D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8D94u;
    // 0x1b8d98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B8D94u, 0x1B8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D9Cu;
label_1b8d9c:
    // 0x1b8d9c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8D9Cu;
    {
        const bool branch_taken_0x1b8d9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D9Cu;
        // 0x1b8da0: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d9c) {
            ctx->pc = 0x1B8DACu;
            return;
        }
    }
    ctx->pc = 0x1B8DA4u;
}
