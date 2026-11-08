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

// Function: ApItemPartsCheck__Fss
// Address: 0x114d80 - 0x114ea4
void ApItemPartsCheck__Fss_0x114d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemPartsCheck__Fss_0x114d80");
#endif

    switch (ctx->pc) {
        case 0x114dc4u: goto label_114dc4;
        case 0x114ddcu: goto label_114ddc;
        case 0x114df8u: goto label_114df8;
        case 0x114e10u: goto label_114e10;
        case 0x114e30u: goto label_114e30;
        case 0x114e48u: goto label_114e48;
        case 0x114e78u: goto label_114e78;
        case 0x114e90u: goto label_114e90;
        default: break;
    }

    ctx->pc = 0x114d80u;

    // 0x114d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114d84: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x114d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x114d88: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x114d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x114d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114d94: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x114d94u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x114d98: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x114d98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x114d9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114da4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114da8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114DA8u;
    {
        const bool branch_taken_0x114da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x114DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DA8u;
        // 0x114dac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114da8) {
            ctx->pc = 0x114DB8u;
            goto label_114db8;
        }
    }
    ctx->pc = 0x114DB0u;
    // 0x114db0: 0x1623000a  bne         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x114DB0u;
    {
        const bool branch_taken_0x114db0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x114db0) {
            ctx->pc = 0x114DDCu;
            goto label_114ddc;
        }
    }
    ctx->pc = 0x114DB8u;
label_114db8:
    // 0x114db8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114dbc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114DBCu;
    SET_GPR_U32(ctx, 31, 0x114DC4u);
    ctx->pc = 0x114DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DBCu;
    // 0x114dc0: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114DBCu, 0x114DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DC4u;
label_114dc4:
    // 0x114dc4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114dc8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114dcc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114dd0: 0x24a54360  addiu       $a1, $a1, 0x4360
    ctx->pc = 0x114dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17248));
    // 0x114dd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114DD4u;
    SET_GPR_U32(ctx, 31, 0x114DDCu);
    ctx->pc = 0x114DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DD4u;
    // 0x114dd8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114DD4u, 0x114DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DDCu;
label_114ddc:
    // 0x114ddc: 0x1e00000d  bgtz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x114DDCu;
    {
        const bool branch_taken_0x114ddc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x114DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DDCu;
        // 0x114de0: 0x2a02000c  slti        $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ddc) {
            ctx->pc = 0x114E14u;
            goto label_114e14;
        }
    }
    ctx->pc = 0x114DE4u;
    // 0x114de4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114dec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114df0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114DF0u;
    SET_GPR_U32(ctx, 31, 0x114DF8u);
    ctx->pc = 0x114DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DF0u;
    // 0x114df4: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114DF0u, 0x114DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DF8u;
label_114df8:
    // 0x114df8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114dfc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114e00: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114e04: 0x24a54370  addiu       $a1, $a1, 0x4370
    ctx->pc = 0x114e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17264));
    // 0x114e08: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114E08u;
    SET_GPR_U32(ctx, 31, 0x114E10u);
    ctx->pc = 0x114E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E08u;
    // 0x114e0c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114E08u, 0x114E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E10u;
label_114e10:
    // 0x114e10: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x114e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_114e14:
    // 0x114e14: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114E14u;
    {
        const bool branch_taken_0x114e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E14u;
        // 0x114e18: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e14) {
            ctx->pc = 0x114E4Cu;
            goto label_114e4c;
        }
    }
    ctx->pc = 0x114E1Cu;
    // 0x114e1c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e28: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114E28u;
    SET_GPR_U32(ctx, 31, 0x114E30u);
    ctx->pc = 0x114E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E28u;
    // 0x114e2c: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114E28u, 0x114E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E30u;
label_114e30:
    // 0x114e30: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114e34: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114e38: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114e3c: 0x24a54370  addiu       $a1, $a1, 0x4370
    ctx->pc = 0x114e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17264));
    // 0x114e40: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114E40u;
    SET_GPR_U32(ctx, 31, 0x114E48u);
    ctx->pc = 0x114E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E40u;
    // 0x114e44: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114E40u, 0x114E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E48u;
label_114e48:
    // 0x114e48: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x114e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_114e4c:
    // 0x114e4c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x114e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x114e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114e54: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x114e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x114e58: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x114e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x114e5c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x114E5Cu;
    {
        const bool branch_taken_0x114e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e5c) {
            ctx->pc = 0x114E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114E5Cu;
            // 0x114e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114E94u;
            goto label_114e94;
        }
    }
    ctx->pc = 0x114E64u;
    // 0x114e64: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e70: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114E70u;
    SET_GPR_U32(ctx, 31, 0x114E78u);
    ctx->pc = 0x114E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E70u;
    // 0x114e74: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114E70u, 0x114E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E78u;
label_114e78:
    // 0x114e78: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114e7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114e80: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114e84: 0x24a54380  addiu       $a1, $a1, 0x4380
    ctx->pc = 0x114e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    // 0x114e88: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114E88u;
    SET_GPR_U32(ctx, 31, 0x114E90u);
    ctx->pc = 0x114E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E88u;
    // 0x114e8c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114E88u, 0x114E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E90u;
label_114e90:
    // 0x114e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114e94:
    // 0x114e94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x114E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E9Cu;
        // 0x114ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114EA4u;
}
