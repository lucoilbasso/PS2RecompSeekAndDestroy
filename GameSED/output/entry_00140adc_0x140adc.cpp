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

// Function: entry_00140adc
// Address: 0x140adc - 0x140b00
void entry_00140adc_0x140adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140adc_0x140adc");
#endif

    switch (ctx->pc) {
        case 0x140af4u: goto label_140af4;
        default: break;
    }

    ctx->pc = 0x140adcu;

    // 0x140adc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140ae0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x140ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ae4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x140ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x140ae8: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x140ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x140aec: 0xc0505ae  jal         func_1416B8
    ctx->pc = 0x140AECu;
    SET_GPR_U32(ctx, 31, 0x140AF4u);
    ctx->pc = 0x140AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140AECu;
    // 0x140af0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1416B8u, 0x140AECu, 0x140AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AF4u;
label_140af4:
    // 0x140af4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140AF4u;
    {
        const bool branch_taken_0x140af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AF4u;
        // 0x140af8: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140af4) {
            ctx->pc = 0x140B0Cu;
            return;
        }
    }
    ctx->pc = 0x140AFCu;
    // 0x140afc: 0x0  nop
    ctx->pc = 0x140afcu;
    // NOP
    ctx->pc = 0x140b00u;
}
