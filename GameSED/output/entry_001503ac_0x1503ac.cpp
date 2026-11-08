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

// Function: entry_001503ac
// Address: 0x1503ac - 0x1503f0
void entry_001503ac_0x1503ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001503ac_0x1503ac");
#endif

    ctx->pc = 0x1503acu;

    // 0x1503ac: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1503b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1503b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1503b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1503b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1503b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1503bc: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x1503bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x1503c0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1503c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1503c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1503c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1503c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1503C8u;
    {
        const bool branch_taken_0x1503c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1503CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503C8u;
        // 0x1503cc: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503c8) {
            ctx->pc = 0x1503F0u;
            return;
        }
    }
    ctx->pc = 0x1503D0u;
    // 0x1503d0: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x1503d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x1503d4: 0x8c431a2c  lw          $v1, 0x1A2C($v0)
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
    // 0x1503d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1503D8u;
    {
        const bool branch_taken_0x1503d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503D8u;
        // 0x1503dc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503d8) {
            ctx->pc = 0x1503F4u;
            return;
        }
    }
    ctx->pc = 0x1503E0u;
    // 0x1503e0: 0x86420266  lh          $v0, 0x266($s2)
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x1503e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1503e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1503e8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1503E8u;
    {
        const bool branch_taken_0x1503e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503E8u;
        // 0x1503ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503e8) {
            ctx->pc = 0x1504F8u;
            return;
        }
    }
    ctx->pc = 0x1503F0u;
}
