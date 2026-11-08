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

// Function: entry_00145ef0
// Address: 0x145ef0 - 0x145f18
void entry_00145ef0_0x145ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ef0_0x145ef0");
#endif

    ctx->pc = 0x145ef0u;

    // 0x145ef0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145EF0u;
    {
        const bool branch_taken_0x145ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x145EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EF0u;
        // 0x145ef4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ef0) {
            ctx->pc = 0x145F30u;
            return;
        }
    }
    ctx->pc = 0x145EF8u;
    // 0x145ef8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x145ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145efc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x145EFCu;
    {
        const bool branch_taken_0x145efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145efc) {
            ctx->pc = 0x145F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145EFCu;
            // 0x145f00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F18u;
            return;
        }
    }
    ctx->pc = 0x145F04u;
    // 0x145f04: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x145F04u;
    {
        const bool branch_taken_0x145f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F04u;
        // 0x145f08: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f04) {
            ctx->pc = 0x145F28u;
            return;
        }
    }
    ctx->pc = 0x145F0Cu;
    // 0x145f0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145F0Cu;
    {
        const bool branch_taken_0x145f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F0Cu;
        // 0x145f10: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f0c) {
            ctx->pc = 0x145F38u;
            return;
        }
    }
    ctx->pc = 0x145F14u;
    // 0x145f14: 0x0  nop
    ctx->pc = 0x145f14u;
    // NOP
    ctx->pc = 0x145f18u;
}
