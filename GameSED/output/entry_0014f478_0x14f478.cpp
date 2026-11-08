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

// Function: entry_0014f478
// Address: 0x14f478 - 0x14f4ac
void entry_0014f478_0x14f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f478_0x14f478");
#endif

    ctx->pc = 0x14f478u;

    // 0x14f478: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x14f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14f47c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x14f47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f480: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F480u;
    {
        const bool branch_taken_0x14f480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F480u;
        // 0x14f484: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f480) {
            ctx->pc = 0x14F4ACu;
            return;
        }
    }
    ctx->pc = 0x14F488u;
    // 0x14f488: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x14f48c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14f490: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14F490u;
    {
        const bool branch_taken_0x14f490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f490) {
            ctx->pc = 0x14F494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F490u;
            // 0x14f494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4BCu;
            return;
        }
    }
    ctx->pc = 0x14F498u;
    // 0x14f498: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f49c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f4a0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14f4a0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14f4a4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f4a8: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x14f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x14f4acu;
}
