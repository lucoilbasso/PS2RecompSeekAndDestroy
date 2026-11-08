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

// Function: entry_0016a9bc
// Address: 0x16a9bc - 0x16aa28
void entry_0016a9bc_0x16a9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a9bc_0x16a9bc");
#endif

    switch (ctx->pc) {
        case 0x16a9d0u: goto label_16a9d0;
        case 0x16a9dcu: goto label_16a9dc;
        default: break;
    }

    ctx->pc = 0x16a9bcu;

    // 0x16a9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a9c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16a9c4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x16a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x16a9c8: 0xc04110c  jal         func_104430
    ctx->pc = 0x16A9C8u;
    SET_GPR_U32(ctx, 31, 0x16A9D0u);
    ctx->pc = 0x16A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9C8u;
    // 0x16a9cc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16A9C8u, 0x16A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9D0u;
label_16a9d0:
    // 0x16a9d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A9D4u;
    SET_GPR_U32(ctx, 31, 0x16A9DCu);
    ctx->pc = 0x16A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9D4u;
    // 0x16a9d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A9D4u, 0x16A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9DCu;
label_16a9dc:
    // 0x16a9dc: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x16a9dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9e4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16a9e8: 0x24022846  addiu       $v0, $zero, 0x2846
    ctx->pc = 0x16a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
    // 0x16a9ec: 0x14820052  bne         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x16A9ECu;
    {
        const bool branch_taken_0x16a9ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9ECu;
        // 0x16a9f0: 0x8c73b830  lw          $s3, -0x47D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9ec) {
            ctx->pc = 0x16AB38u;
            return;
        }
    }
    ctx->pc = 0x16A9F4u;
    // 0x16a9f4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x16a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x16a9f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9fc: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A9FCu;
    {
        const bool branch_taken_0x16a9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9FCu;
        // 0x16aa00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9fc) {
            ctx->pc = 0x16AA40u;
            return;
        }
    }
    ctx->pc = 0x16AA04u;
    // 0x16aa04: 0x28a20016  slti        $v0, $a1, 0x16
    ctx->pc = 0x16aa04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x16aa08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AA08u;
    {
        const bool branch_taken_0x16aa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA08u;
        // 0x16aa0c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa08) {
            ctx->pc = 0x16AA28u;
            return;
        }
    }
    ctx->pc = 0x16AA10u;
    // 0x16aa10: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16aa14: 0x50a2000d  beql        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16AA14u;
    {
        const bool branch_taken_0x16aa14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16aa14) {
            ctx->pc = 0x16AA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA14u;
            // 0x16aa18: 0x26301200  addiu       $s0, $s1, 0x1200 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4608));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AA4Cu;
            return;
        }
    }
    ctx->pc = 0x16AA1Cu;
    // 0x16aa1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16AA1Cu;
    {
        const bool branch_taken_0x16aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa1c) {
            ctx->pc = 0x16AA4Cu;
            return;
        }
    }
    ctx->pc = 0x16AA24u;
    // 0x16aa24: 0x0  nop
    ctx->pc = 0x16aa24u;
    // NOP
    ctx->pc = 0x16aa28u;
}
