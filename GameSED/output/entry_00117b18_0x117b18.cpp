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

// Function: entry_00117b18
// Address: 0x117b18 - 0x117b98
void entry_00117b18_0x117b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b18_0x117b18");
#endif

    ctx->pc = 0x117b18u;

    // 0x117b18: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x117b18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x117b1c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x117b1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x117b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117b24: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x117b24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x117b28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117b2c: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x117b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x117b30: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x117b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x117b34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117b38: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x117b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x117b3c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x117b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117b40: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x117b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x117b44: 0x31260001  andi        $a2, $t1, 0x1
    ctx->pc = 0x117b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x117b48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x117b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x117b4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x117b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x117b50: 0x2d28000c  sltiu       $t0, $t1, 0xC
    ctx->pc = 0x117b50u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x117b54: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x117b54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x117b58: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x117B58u;
    {
        const bool branch_taken_0x117b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B58u;
        // 0x117b5c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b58) {
            ctx->pc = 0x117B98u;
            return;
        }
    }
    ctx->pc = 0x117B60u;
    // 0x117b60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x117b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117b64: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x117b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x117b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117b70: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x117b74: 0x1421004  sllv        $v0, $v0, $t2
    ctx->pc = 0x117b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b78: 0x1431804  sllv        $v1, $v1, $t2
    ctx->pc = 0x117b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117b80: 0x1421007  srav        $v0, $v0, $t2
    ctx->pc = 0x117b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x117b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x117b88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x117b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x117b8c: 0x1431807  srav        $v1, $v1, $t2
    ctx->pc = 0x117b8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b90: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x117b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117b94: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x117b94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x117b98u;
}
