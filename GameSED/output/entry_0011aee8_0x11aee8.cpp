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

// Function: entry_0011aee8
// Address: 0x11aee8 - 0x11af5c
void entry_0011aee8_0x11aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aee8_0x11aee8");
#endif

    ctx->pc = 0x11aee8u;

label_11aee8:
    // 0x11aee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11aeec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11aef0: 0x0  nop
    ctx->pc = 0x11aef0u;
    // NOP
    // 0x11aef4: 0x0  nop
    ctx->pc = 0x11aef4u;
    // NOP
    // 0x11aef8: 0x0  nop
    ctx->pc = 0x11aef8u;
    // NOP
    // 0x11aefc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AEFCu;
    {
        const bool branch_taken_0x11aefc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEFCu;
        // 0x11af00: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aefc) {
            ctx->pc = 0x11AEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aee8;
        }
    }
    ctx->pc = 0x11AF04u;
    // 0x11af04: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x11af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11af08: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x11af08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11af0c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x11af0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11af10: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x11af14: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x11af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x11af18: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11af1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x11af20: 0x8e060098  lw          $a2, 0x98($s0)
    ctx->pc = 0x11af20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x11af24: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x11af24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x11af28: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x11af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x11af2c: 0xae0440a4  sw          $a0, 0x40A4($s0)
    ctx->pc = 0x11af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16548), GPR_U32(ctx, 4));
    // 0x11af30: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11af34: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x11af34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11af38: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x11af3c: 0xaca60044  sw          $a2, 0x44($a1)
    ctx->pc = 0x11af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 6));
    // 0x11af40: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x11af40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x11af44: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x11af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11af48: 0xacb00040  sw          $s0, 0x40($a1)
    ctx->pc = 0x11af48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 16));
    // 0x11af4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11af50: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x11af50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11af54: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x11af54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x11af58: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x11af58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    ctx->pc = 0x11af5cu;
}
