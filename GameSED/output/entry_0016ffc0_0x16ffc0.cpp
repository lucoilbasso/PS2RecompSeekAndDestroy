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

// Function: entry_0016ffc0
// Address: 0x16ffc0 - 0x16ffe8
void entry_0016ffc0_0x16ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ffc0_0x16ffc0");
#endif

    ctx->pc = 0x16ffc0u;

    // 0x16ffc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16ffc4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16ffc8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16ffcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ffd0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16FFD0u;
    {
        const bool branch_taken_0x16ffd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFD0u;
        // 0x16ffd4: 0xaf828be0  sw          $v0, -0x7420($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffd0) {
            ctx->pc = 0x170024u;
            return;
        }
    }
    ctx->pc = 0x16FFD8u;
    // 0x16ffd8: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x16ffdc: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x16ffdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16ffe0: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x16ffe0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x16ffe4: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x16ffe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->pc = 0x16ffe8u;
}
