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

// Function: entry_001cc608
// Address: 0x1cc608 - 0x1cc638
void entry_001cc608_0x1cc608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc608_0x1cc608");
#endif

    ctx->pc = 0x1cc608u;

    // 0x1cc608: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1cc60c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cc610: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1cc610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1cc614: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1cc614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cc618: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x1cc618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
    // 0x1cc61c: 0x31f82  srl         $v1, $v1, 30
    ctx->pc = 0x1cc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
    // 0x1cc620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cc624: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x1cc624u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x1cc628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc62c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC62Cu;
    {
        const bool branch_taken_0x1cc62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC62Cu;
        // 0x1cc630: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc62c) {
            ctx->pc = 0x1CC638u;
            return;
        }
    }
    ctx->pc = 0x1CC634u;
    // 0x1cc634: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1cc634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->pc = 0x1cc638u;
}
