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

// Function: entry_0013dd30
// Address: 0x13dd30 - 0x13dd98
void entry_0013dd30_0x13dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd30_0x13dd30");
#endif

    ctx->pc = 0x13dd30u;

    // 0x13dd30: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x13dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13dd34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13dd38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13dd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13dd3c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13dd40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13dd44: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13dd48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13dd4c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13dd50: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x13dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x13dd54: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13dd58: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x13dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x13dd5c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13dd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13dd60: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x13dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x13dd64: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13dd68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13dd6c: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x13dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13dd70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DD70u;
    {
        const bool branch_taken_0x13dd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd70) {
            ctx->pc = 0x13DD98u;
            return;
        }
    }
    ctx->pc = 0x13DD78u;
    // 0x13dd78: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x13dd7c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13dd80: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13dd84: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13dd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13dd88: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x13dd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13dd8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13DD8Cu;
    {
        const bool branch_taken_0x13dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD8Cu;
        // 0x13dd90: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd8c) {
            ctx->pc = 0x13DDCCu;
            return;
        }
    }
    ctx->pc = 0x13DD94u;
    // 0x13dd94: 0x0  nop
    ctx->pc = 0x13dd94u;
    // NOP
    ctx->pc = 0x13dd98u;
}
