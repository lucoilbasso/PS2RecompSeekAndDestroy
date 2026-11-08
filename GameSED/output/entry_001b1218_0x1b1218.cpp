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

// Function: entry_001b1218
// Address: 0x1b1218 - 0x1b1250
void entry_001b1218_0x1b1218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1218_0x1b1218");
#endif

    ctx->pc = 0x1b1218u;

    // 0x1b1218: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b121c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b1220: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1220u;
    {
        const bool branch_taken_0x1b1220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1220) {
            ctx->pc = 0x1B1224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1220u;
            // 0x1b1224: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1264u;
            return;
        }
    }
    ctx->pc = 0x1B1228u;
    // 0x1b1228: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1b1228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b122c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1b122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1b1230: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b1230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1b1234: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b1238: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b123c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B123Cu;
    {
        const bool branch_taken_0x1b123c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B123Cu;
        // 0x1b1240: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b123c) {
            ctx->pc = 0x1B1250u;
            return;
        }
    }
    ctx->pc = 0x1B1244u;
    // 0x1b1244: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1b1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1b1248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b124c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b124cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1b1250u;
}
