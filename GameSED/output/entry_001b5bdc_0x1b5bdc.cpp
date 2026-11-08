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

// Function: entry_001b5bdc
// Address: 0x1b5bdc - 0x1b5c24
void entry_001b5bdc_0x1b5bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5bdc_0x1b5bdc");
#endif

    switch (ctx->pc) {
        case 0x1b5c10u: goto label_1b5c10;
        default: break;
    }

    ctx->pc = 0x1b5bdcu;

    // 0x1b5bdc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B5BDCu;
    {
        const bool branch_taken_0x1b5bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BDCu;
        // 0x1b5be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bdc) {
            ctx->pc = 0x1B5C44u;
            return;
        }
    }
    ctx->pc = 0x1B5BE4u;
    // 0x1b5be4: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b5be4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b5be8: 0xae40aa20  sw          $zero, -0x55E0($s2)
    ctx->pc = 0x1b5be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945312), GPR_U32(ctx, 0));
    // 0x1b5bec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b5becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5bf0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b5bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b5bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b5bfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c00: 0x2629b400  addiu       $t1, $s1, -0x4C00
    ctx->pc = 0x1b5c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947840));
    // 0x1b5c04: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5c08: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5C08u;
    SET_GPR_U32(ctx, 31, 0x1B5C10u);
    ctx->pc = 0x1B5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C08u;
    // 0x1b5c0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5C08u, 0x1B5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C10u;
label_1b5c10:
    // 0x1b5c10: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5C10u;
    {
        const bool branch_taken_0x1b5c10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C10u;
        // 0x1b5c14: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c10) {
            ctx->pc = 0x1B5C24u;
            return;
        }
    }
    ctx->pc = 0x1B5C18u;
    // 0x1b5c18: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b5c1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5C1Cu;
    {
        const bool branch_taken_0x1b5c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C1Cu;
        // 0x1b5c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c1c) {
            ctx->pc = 0x1B5C78u;
            return;
        }
    }
    ctx->pc = 0x1B5C24u;
}
