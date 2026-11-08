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

// Function: entry_001451ec
// Address: 0x1451ec - 0x145250
void entry_001451ec_0x1451ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001451ec_0x1451ec");
#endif

    switch (ctx->pc) {
        case 0x145208u: goto label_145208;
        case 0x145214u: goto label_145214;
        case 0x145224u: goto label_145224;
        default: break;
    }

    ctx->pc = 0x1451ecu;

    // 0x1451ec: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x1451ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x1451f0: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x1451f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x1451f4: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1451f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1451f8: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x1451f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x1451fc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1451fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x145200: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x145200u;
    SET_GPR_U32(ctx, 31, 0x145208u);
    ctx->pc = 0x145204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145200u;
    // 0x145204: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x145200u, 0x145208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145208u;
label_145208:
    // 0x145208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14520c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14520Cu;
    SET_GPR_U32(ctx, 31, 0x145214u);
    ctx->pc = 0x145210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14520Cu;
    // 0x145210: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14520Cu, 0x145214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145214u;
label_145214:
    // 0x145214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145218: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14521c: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x14521Cu;
    SET_GPR_U32(ctx, 31, 0x145224u);
    ctx->pc = 0x145220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14521Cu;
    // 0x145220: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x14521Cu, 0x145224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145224u;
label_145224:
    // 0x145224: 0x131a03  sra         $v1, $s3, 8
    ctx->pc = 0x145224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 8));
    // 0x145228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14522c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14522Cu;
    {
        const bool branch_taken_0x14522c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14522Cu;
        // 0x145230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14522c) {
            ctx->pc = 0x145268u;
            return;
        }
    }
    ctx->pc = 0x145234u;
    // 0x145234: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x145234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145238: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x145238u;
    {
        const bool branch_taken_0x145238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145238) {
            ctx->pc = 0x14523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145238u;
            // 0x14523c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145250u;
            return;
        }
    }
    ctx->pc = 0x145240u;
    // 0x145240: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x145240u;
    {
        const bool branch_taken_0x145240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145240u;
        // 0x145244: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145240) {
            ctx->pc = 0x145260u;
            return;
        }
    }
    ctx->pc = 0x145248u;
    // 0x145248: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x145248u;
    {
        const bool branch_taken_0x145248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145248u;
        // 0x14524c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145248) {
            ctx->pc = 0x145270u;
            return;
        }
    }
    ctx->pc = 0x145250u;
}
