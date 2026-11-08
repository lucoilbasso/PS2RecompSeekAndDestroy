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

// Function: entry_00130b20
// Address: 0x130b20 - 0x130b80
void entry_00130b20_0x130b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130b20_0x130b20");
#endif

    ctx->pc = 0x130b20u;

label_130b20:
    // 0x130b20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130b24: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x130b28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x130b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x130b2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x130b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x130b30: 0x0  nop
    ctx->pc = 0x130b30u;
    // NOP
    // 0x130b34: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130B34u;
    {
        const bool branch_taken_0x130b34 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x130B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B34u;
        // 0x130b38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b34) {
            ctx->pc = 0x130B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130b20;
        }
    }
    ctx->pc = 0x130B3Cu;
    // 0x130b3c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x130b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x130b40: 0x94e80038  lhu         $t0, 0x38($a3)
    ctx->pc = 0x130b40u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x130b44: 0x8c490020  lw          $t1, 0x20($v0)
    ctx->pc = 0x130b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x130b48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x130b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x130b4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x130b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x130b50: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x130b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x130b54: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x130b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x130b58: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x130b58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x130b5c: 0xa6080066  sh          $t0, 0x66($s0)
    ctx->pc = 0x130b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 8));
    // 0x130b60: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x130b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x130b64: 0xae0400cc  sw          $a0, 0xCC($s0)
    ctx->pc = 0x130b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 4));
    // 0x130b68: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x130b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x130b6c: 0xae0600d4  sw          $a2, 0xD4($s0)
    ctx->pc = 0x130b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 6));
    // 0x130b70: 0xae070108  sw          $a3, 0x108($s0)
    ctx->pc = 0x130b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 7));
    // 0x130b74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130B74u;
    {
        const bool branch_taken_0x130b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B74u;
        // 0x130b78: 0xae09010c  sw          $t1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b74) {
            ctx->pc = 0x130B9Cu;
            return;
        }
    }
    ctx->pc = 0x130B7Cu;
    // 0x130b7c: 0x0  nop
    ctx->pc = 0x130b7cu;
    // NOP
    ctx->pc = 0x130b80u;
}
