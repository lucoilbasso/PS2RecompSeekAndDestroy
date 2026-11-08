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

// Function: entry_00179ab8
// Address: 0x179ab8 - 0x179b0c
void entry_00179ab8_0x179ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ab8_0x179ab8");
#endif

    switch (ctx->pc) {
        case 0x179ac4u: goto label_179ac4;
        case 0x179ae0u: goto label_179ae0;
        default: break;
    }

    ctx->pc = 0x179ab8u;

label_179ab8:
    // 0x179ab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179abc: 0xc07158c  jal         func_1C5630
    ctx->pc = 0x179ABCu;
    SET_GPR_U32(ctx, 31, 0x179AC4u);
    ctx->pc = 0x179AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ABCu;
    // 0x179ac0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5630u, 0x179ABCu, 0x179AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AC4u;
label_179ac4:
    // 0x179ac4: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x179AC4u;
    {
        const bool branch_taken_0x179ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AC4u;
        // 0x179ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ac4) {
            ctx->pc = 0x179AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179ab8;
        }
    }
    ctx->pc = 0x179ACCu;
    // 0x179acc: 0x26704030  addiu       $s0, $s3, 0x4030
    ctx->pc = 0x179accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16432));
    // 0x179ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ad8: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179AD8u;
    SET_GPR_U32(ctx, 31, 0x179AE0u);
    ctx->pc = 0x179ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AD8u;
    // 0x179adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179AD8u, 0x179AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AE0u;
label_179ae0:
    // 0x179ae0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179ae4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x179AE4u;
    {
        const bool branch_taken_0x179ae4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x179AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AE4u;
        // 0x179ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ae4) {
            ctx->pc = 0x179B18u;
            return;
        }
    }
    ctx->pc = 0x179AECu;
    // 0x179aec: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x179aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x179af0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179AF0u;
    {
        const bool branch_taken_0x179af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x179AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AF0u;
        // 0x179af4: 0x2882fff8  slti        $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967288) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179af0) {
            ctx->pc = 0x179B0Cu;
            return;
        }
    }
    ctx->pc = 0x179AF8u;
    // 0x179af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179AF8u;
    {
        const bool branch_taken_0x179af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AF8u;
        // 0x179afc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179af8) {
            ctx->pc = 0x179B10u;
            return;
        }
    }
    ctx->pc = 0x179B00u;
    // 0x179b00: 0x2882ffff  slti        $v0, $a0, -0x1
    ctx->pc = 0x179b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x179b04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x179B04u;
    {
        const bool branch_taken_0x179b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179b04) {
            ctx->pc = 0x179B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179B04u;
            // 0x179b08: 0x2882fffb  slti        $v0, $a0, -0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967291) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179B0Cu;
            return;
        }
    }
    ctx->pc = 0x179B0Cu;
}
