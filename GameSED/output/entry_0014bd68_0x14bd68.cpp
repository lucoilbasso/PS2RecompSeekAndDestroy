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

// Function: entry_0014bd68
// Address: 0x14bd68 - 0x14bd90
void entry_0014bd68_0x14bd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bd68_0x14bd68");
#endif

    ctx->pc = 0x14bd68u;

    // 0x14bd68: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x14bd6c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BD6Cu;
    {
        const bool branch_taken_0x14bd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD6Cu;
        // 0x14bd70: 0x30a30fff  andi        $v1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd6c) {
            ctx->pc = 0x14BD90u;
            return;
        }
    }
    ctx->pc = 0x14BD74u;
    // 0x14bd74: 0x96240286  lhu         $a0, 0x286($s1)
    ctx->pc = 0x14bd74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 646)));
    // 0x14bd78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14bd7c: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x14bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x14bd80: 0xa4e30238  sh          $v1, 0x238($a3)
    ctx->pc = 0x14bd80u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 3));
    // 0x14bd84: 0xa4e4023a  sh          $a0, 0x23A($a3)
    ctx->pc = 0x14bd84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 4));
    // 0x14bd88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14BD88u;
    {
        const bool branch_taken_0x14bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD88u;
        // 0x14bd8c: 0xace2023c  sw          $v0, 0x23C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd88) {
            ctx->pc = 0x14BE70u;
            return;
        }
    }
    ctx->pc = 0x14BD90u;
}
