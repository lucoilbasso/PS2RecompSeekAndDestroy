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

// Function: entry_00189b28
// Address: 0x189b28 - 0x189b90
void entry_00189b28_0x189b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b28_0x189b28");
#endif

    ctx->pc = 0x189b28u;

    // 0x189b28: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x189b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x189b2c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x189b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x189b30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x189b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x189b34: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x189b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x189b38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x189b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189b3c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x189b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x189b40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x189b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x189b44: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x189b48: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x189b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x189b4c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x189b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x189b50: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x189b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x189b54: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x189b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x189b58: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x189b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x189b5c: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x189b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x189b60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x189b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x189b64: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x189b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x189b68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189B68u;
    {
        const bool branch_taken_0x189b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b68) {
            ctx->pc = 0x189B90u;
            return;
        }
    }
    ctx->pc = 0x189B70u;
    // 0x189b70: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x189b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x189b74: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x189b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x189b78: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x189b7c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x189b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x189b80: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x189b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x189b84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189B84u;
    {
        const bool branch_taken_0x189b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B84u;
        // 0x189b88: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b84) {
            ctx->pc = 0x189BC4u;
            return;
        }
    }
    ctx->pc = 0x189B8Cu;
    // 0x189b8c: 0x0  nop
    ctx->pc = 0x189b8cu;
    // NOP
    ctx->pc = 0x189b90u;
}
