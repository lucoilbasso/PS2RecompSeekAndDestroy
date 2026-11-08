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

// Function: entry_00136abc
// Address: 0x136abc - 0x136b08
void entry_00136abc_0x136abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136abc_0x136abc");
#endif

    switch (ctx->pc) {
        case 0x136ad0u: goto label_136ad0;
        case 0x136adcu: goto label_136adc;
        case 0x136b00u: goto label_136b00;
        default: break;
    }

    ctx->pc = 0x136abcu;

    // 0x136abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136ac0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136ac4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x136ac8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136AC8u;
    SET_GPR_U32(ctx, 31, 0x136AD0u);
    ctx->pc = 0x136ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AC8u;
    // 0x136acc: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136AC8u, 0x136AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD0u;
label_136ad0:
    // 0x136ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x136ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ad4: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x136AD4u;
    SET_GPR_U32(ctx, 31, 0x136ADCu);
    ctx->pc = 0x136AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD4u;
    // 0x136ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x136AD4u, 0x136ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ADCu;
label_136adc:
    // 0x136adc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x136adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136ae0: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x136AE0u;
    {
        const bool branch_taken_0x136ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE0u;
        // 0x136ae4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ae0) {
            ctx->pc = 0x136B7Cu;
            return;
        }
    }
    ctx->pc = 0x136AE8u;
    // 0x136ae8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x136ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x136aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x136aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136af0: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136AF0u;
    {
        const bool branch_taken_0x136af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x136af0) {
            ctx->pc = 0x136AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136AF0u;
            // 0x136af4: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B08u;
            return;
        }
    }
    ctx->pc = 0x136AF8u;
    // 0x136af8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136AF8u;
    SET_GPR_U32(ctx, 31, 0x136B00u);
    ctx->pc = 0x136AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AF8u;
    // 0x136afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136AF8u, 0x136B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B00u;
label_136b00:
    // 0x136b00: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x136b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x136b04: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x136b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x136b08u;
}
