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

// Function: entry_00199030
// Address: 0x199030 - 0x199068
void entry_00199030_0x199030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199030_0x199030");
#endif

    ctx->pc = 0x199030u;

label_199030:
    // 0x199030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199034: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199038: 0x0  nop
    ctx->pc = 0x199038u;
    // NOP
    // 0x19903c: 0x0  nop
    ctx->pc = 0x19903cu;
    // NOP
    // 0x199040: 0x0  nop
    ctx->pc = 0x199040u;
    // NOP
    // 0x199044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199044u;
    {
        const bool branch_taken_0x199044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199044u;
        // 0x199048: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199044) {
            ctx->pc = 0x199030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199030;
        }
    }
    ctx->pc = 0x19904Cu;
    // 0x19904c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x199050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199054: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x199054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x199058: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x199058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19905c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x19905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x199060: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x199060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x199064: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x199064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x199068u;
}
