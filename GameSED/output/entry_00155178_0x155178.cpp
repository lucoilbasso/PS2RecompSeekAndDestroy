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

// Function: entry_00155178
// Address: 0x155178 - 0x1551b0
void entry_00155178_0x155178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155178_0x155178");
#endif

    ctx->pc = 0x155178u;

    // 0x155178: 0x50800069  beql        $a0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x155178u;
    {
        const bool branch_taken_0x155178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155178) {
            ctx->pc = 0x15517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155178u;
            // 0x15517c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x155180u;
    // 0x155180: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x155180u;
    {
        const bool branch_taken_0x155180 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x155184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155180u;
        // 0x155184: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155180) {
            ctx->pc = 0x1551C0u;
            return;
        }
    }
    ctx->pc = 0x155188u;
    // 0x155188: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x155188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15518c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155190: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x155194: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
    // 0x155198: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x155198u;
    {
        const bool branch_taken_0x155198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x15519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155198u;
        // 0x15519c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155198) {
            ctx->pc = 0x1551B0u;
            return;
        }
    }
    ctx->pc = 0x1551A0u;
    // 0x1551a0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1551a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1551a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1551A4u;
    {
        const bool branch_taken_0x1551a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551A4u;
        // 0x1551a8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551a4) {
            ctx->pc = 0x1551B4u;
            return;
        }
    }
    ctx->pc = 0x1551ACu;
    // 0x1551ac: 0x0  nop
    ctx->pc = 0x1551acu;
    // NOP
    ctx->pc = 0x1551b0u;
}
