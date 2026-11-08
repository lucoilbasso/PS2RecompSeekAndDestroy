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

// Function: entry_00117c68
// Address: 0x117c68 - 0x117ca0
void entry_00117c68_0x117c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117c68_0x117c68");
#endif

    ctx->pc = 0x117c68u;

    // 0x117c68: 0x10cd000d  beq         $a2, $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x117C68u;
    {
        const bool branch_taken_0x117c68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        ctx->pc = 0x117C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C68u;
        // 0x117c6c: 0x24c2fffe  addiu       $v0, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c68) {
            ctx->pc = 0x117CA0u;
            return;
        }
    }
    ctx->pc = 0x117C70u;
    // 0x117c70: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x117c70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x117c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117c78: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x117c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x117c7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117c80: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x117c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x117c84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117c88: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x117c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117c8c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x117c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x117c90: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x117c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x117c94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x117c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x117c98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x117C98u;
    {
        const bool branch_taken_0x117c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C98u;
        // 0x117c9c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c98) {
            ctx->pc = 0x117CACu;
            return;
        }
    }
    ctx->pc = 0x117CA0u;
}
