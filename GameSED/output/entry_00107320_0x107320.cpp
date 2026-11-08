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

// Function: entry_00107320
// Address: 0x107320 - 0x107358
void entry_00107320_0x107320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107320_0x107320");
#endif

    switch (ctx->pc) {
        case 0x10732cu: goto label_10732c;
        default: break;
    }

    ctx->pc = 0x107320u;

    // 0x107320: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x107320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x107324: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107324u;
    SET_GPR_U32(ctx, 31, 0x10732Cu);
    ctx->pc = 0x107328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107324u;
    // 0x107328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107324u, 0x10732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10732Cu;
label_10732c:
    // 0x10732c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10732cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107334: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x107334u;
    {
        const bool branch_taken_0x107334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x107338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107334u;
        // 0x107338: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107334) {
            ctx->pc = 0x107370u;
            return;
        }
    }
    ctx->pc = 0x10733Cu;
    // 0x10733c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10733Cu;
    {
        const bool branch_taken_0x10733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10733Cu;
        // 0x107340: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10733c) {
            ctx->pc = 0x107358u;
            return;
        }
    }
    ctx->pc = 0x107344u;
    // 0x107344: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107344u;
    {
        const bool branch_taken_0x107344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x107348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107344u;
        // 0x107348: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107344) {
            ctx->pc = 0x107368u;
            return;
        }
    }
    ctx->pc = 0x10734Cu;
    // 0x10734c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10734Cu;
    {
        const bool branch_taken_0x10734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10734c) {
            ctx->pc = 0x107380u;
            return;
        }
    }
    ctx->pc = 0x107354u;
    // 0x107354: 0x0  nop
    ctx->pc = 0x107354u;
    // NOP
    ctx->pc = 0x107358u;
}
