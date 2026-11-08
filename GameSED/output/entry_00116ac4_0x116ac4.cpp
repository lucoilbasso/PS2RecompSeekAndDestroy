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

// Function: entry_00116ac4
// Address: 0x116ac4 - 0x116b08
void entry_00116ac4_0x116ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ac4_0x116ac4");
#endif

    switch (ctx->pc) {
        case 0x116accu: goto label_116acc;
        default: break;
    }

    ctx->pc = 0x116ac4u;

    // 0x116ac4: 0xc041794  jal         func_105E50
    ctx->pc = 0x116AC4u;
    SET_GPR_U32(ctx, 31, 0x116ACCu);
    ctx->pc = 0x116AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AC4u;
    // 0x116ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x116AC4u, 0x116ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116ACCu;
label_116acc:
    // 0x116acc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x116accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ad4: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116ad8: 0x2444fcb0  addiu       $a0, $v0, -0x350
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x116adc: 0x16a30018  bne         $s5, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x116ADCu;
    {
        const bool branch_taken_0x116adc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x116AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ADCu;
        // 0x116ae0: 0xac800400  sw          $zero, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116adc) {
            ctx->pc = 0x116B40u;
            return;
        }
    }
    ctx->pc = 0x116AE4u;
    // 0x116ae4: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116ae8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x116ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116aec: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x116aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116af0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x116af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116af4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116af8: 0x2463d374  addiu       $v1, $v1, -0x2C8C
    ctx->pc = 0x116af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955892));
    // 0x116afc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116b04: 0x0  nop
    ctx->pc = 0x116b04u;
    // NOP
    ctx->pc = 0x116b08u;
}
