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

// Function: Link__9ApcObjRscP5BcObj
// Address: 0x1009b8 - 0x100a74
void Link__9ApcObjRscP5BcObj_0x1009b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Link__9ApcObjRscP5BcObj_0x1009b8");
#endif

    switch (ctx->pc) {
        case 0x1009d8u: goto label_1009d8;
        case 0x100a44u: goto label_100a44;
        case 0x100a60u: goto label_100a60;
        default: break;
    }

    ctx->pc = 0x1009b8u;

    // 0x1009b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1009bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1009bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1009c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1009c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1009c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1009c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1009c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1009c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1009cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1009ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1009d0: 0xc068316  jal         func_1A0C58
    ctx->pc = 0x1009D0u;
    SET_GPR_U32(ctx, 31, 0x1009D8u);
    ctx->pc = 0x1009D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009D0u;
    // 0x1009d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C58u, 0x1009D0u, 0x1009D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009D8u;
label_1009d8:
    // 0x1009d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1009d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1009dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1009e0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1009e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1009e4: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1009E4u;
    {
        const bool branch_taken_0x1009e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1009e4) {
            ctx->pc = 0x1009E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1009E4u;
            // 0x1009e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100A64u;
            goto label_100a64;
        }
    }
    ctx->pc = 0x1009ECu;
    // 0x1009ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1009f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1009f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1009f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1009f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1009f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1009F8u;
    {
        const bool branch_taken_0x1009f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009F8u;
        // 0x1009fc: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009f8) {
            ctx->pc = 0x100A10u;
            goto label_100a10;
        }
    }
    ctx->pc = 0x100A00u;
    // 0x100a00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x100A04u;
    {
        const bool branch_taken_0x100a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A04u;
        // 0x100a08: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a04) {
            ctx->pc = 0x100A3Cu;
            goto label_100a3c;
        }
    }
    ctx->pc = 0x100A0Cu;
    // 0x100a0c: 0x0  nop
    ctx->pc = 0x100a0cu;
    // NOP
label_100a10:
    // 0x100a10: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x100a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x100a14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100A14u;
    {
        const bool branch_taken_0x100a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A14u;
        // 0x100a18: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a14) {
            ctx->pc = 0x100A28u;
            goto label_100a28;
        }
    }
    ctx->pc = 0x100A1Cu;
    // 0x100a1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100A20u;
    {
        const bool branch_taken_0x100a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A20u;
        // 0x100a24: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a20) {
            ctx->pc = 0x100A3Cu;
            goto label_100a3c;
        }
    }
    ctx->pc = 0x100A28u;
label_100a28:
    // 0x100a28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100A28u;
    {
        const bool branch_taken_0x100a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A28u;
        // 0x100a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a28) {
            ctx->pc = 0x100A38u;
            goto label_100a38;
        }
    }
    ctx->pc = 0x100A30u;
    // 0x100a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100A30u;
    {
        const bool branch_taken_0x100a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A30u;
        // 0x100a34: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a30) {
            ctx->pc = 0x100A3Cu;
            goto label_100a3c;
        }
    }
    ctx->pc = 0x100A38u;
label_100a38:
    // 0x100a38: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x100a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_100a3c:
    // 0x100a3c: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x100A3Cu;
    SET_GPR_U32(ctx, 31, 0x100A44u);
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x100A3Cu, 0x100A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A44u;
label_100a44:
    // 0x100a44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x100A44u;
    {
        const bool branch_taken_0x100a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a44) {
            ctx->pc = 0x100A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100A44u;
            // 0x100a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100A64u;
            goto label_100a64;
        }
    }
    ctx->pc = 0x100A4Cu;
    // 0x100a4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a54: 0x24a51940  addiu       $a1, $a1, 0x1940
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6464));
    // 0x100a58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x100A58u;
    SET_GPR_U32(ctx, 31, 0x100A60u);
    ctx->pc = 0x100A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A58u;
    // 0x100a5c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100A58u, 0x100A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A60u;
label_100a60:
    // 0x100a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100a64:
    // 0x100a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x100A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A6Cu;
        // 0x100a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100A74u;
}
