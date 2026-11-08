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

// Function: entry_0011e5a0
// Address: 0x11e5a0 - 0x11e5c8
void entry_0011e5a0_0x11e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e5a0_0x11e5a0");
#endif

    ctx->pc = 0x11e5a0u;

    // 0x11e5a0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x11e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11e5a4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x11e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x11e5a8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x11e5a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e5ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E5ACu;
    {
        const bool branch_taken_0x11e5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5ACu;
        // 0x11e5b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5ac) {
            ctx->pc = 0x11E5FCu;
            return;
        }
    }
    ctx->pc = 0x11E5B4u;
    // 0x11e5b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e5b8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x11e5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11e5bc: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e5c0: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e5c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e5c4: 0x0  nop
    ctx->pc = 0x11e5c4u;
    // NOP
    ctx->pc = 0x11e5c8u;
}
