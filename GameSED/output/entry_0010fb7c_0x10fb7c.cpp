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

// Function: entry_0010fb7c
// Address: 0x10fb7c - 0x10fba8
void entry_0010fb7c_0x10fb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb7c_0x10fb7c");
#endif

    ctx->pc = 0x10fb7cu;

    // 0x10fb7c: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x10fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x10fb80: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x10FB80u;
    {
        const bool branch_taken_0x10fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB80u;
        // 0x10fb84: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb80) {
            ctx->pc = 0x10FE0Cu;
            return;
        }
    }
    ctx->pc = 0x10FB88u;
    // 0x10fb88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10fb8c: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x10fb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x10fb90: 0x2c836000  sltiu       $v1, $a0, 0x6000
    ctx->pc = 0x10fb90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
    // 0x10fb94: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FB94u;
    {
        const bool branch_taken_0x10fb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB94u;
        // 0x10fb98: 0x2c824000  sltiu       $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb94) {
            ctx->pc = 0x10FBA8u;
            return;
        }
    }
    ctx->pc = 0x10FB9Cu;
    // 0x10fb9c: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x10fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x10fba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FBA0u;
    {
        const bool branch_taken_0x10fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA0u;
        // 0x10fba4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fba0) {
            ctx->pc = 0x10FBD0u;
            return;
        }
    }
    ctx->pc = 0x10FBA8u;
}
