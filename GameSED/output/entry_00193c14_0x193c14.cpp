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

// Function: entry_00193c14
// Address: 0x193c14 - 0x193c74
void entry_00193c14_0x193c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c14_0x193c14");
#endif

    switch (ctx->pc) {
        case 0x193c48u: goto label_193c48;
        default: break;
    }

    ctx->pc = 0x193c14u;

    // 0x193c14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x193c18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x193c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x193c20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x193c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x193c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x193c28: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x193c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c2c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x193c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x193c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c34: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x193c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x193c38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193c3c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x193c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193c40: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x193C40u;
    SET_GPR_U32(ctx, 31, 0x193C48u);
    ctx->pc = 0x193C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C40u;
    // 0x193c44: 0xae540004  sw          $s4, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x193C40u, 0x193C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C48u;
label_193c48:
    // 0x193c48: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x193c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x193c4c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x193c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x193c50: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x193c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x193c54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x193c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x193c58: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x193c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x193c5c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x193c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x193c60: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x193C60u;
    {
        const bool branch_taken_0x193c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C60u;
        // 0x193c64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c60) {
            ctx->pc = 0x193C74u;
            return;
        }
    }
    ctx->pc = 0x193C68u;
    // 0x193c68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x193c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c6c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193C6Cu;
    SET_GPR_U32(ctx, 31, 0x193C74u);
    ctx->pc = 0x193C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C6Cu;
    // 0x193c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193C6Cu, 0x193C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C74u;
}
