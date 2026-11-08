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

// Function: WMCardCommandSaveProgram__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x179050 - 0x179208
void WMCardCommandSaveProgram__FP7WcMCardP17MCARD_INFORMATION_0x179050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardCommandSaveProgram__FP7WcMCardP17MCARD_INFORMATION_0x179050");
#endif

    switch (ctx->pc) {
        case 0x1790ccu: goto label_1790cc;
        case 0x1790e8u: goto label_1790e8;
        case 0x1790f4u: goto label_1790f4;
        case 0x179110u: goto label_179110;
        case 0x179144u: goto label_179144;
        case 0x179158u: goto label_179158;
        case 0x17917cu: goto label_17917c;
        case 0x17919cu: goto label_17919c;
        case 0x1791b0u: goto label_1791b0;
        default: break;
    }

    ctx->pc = 0x179050u;

    // 0x179050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x179050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x179054: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x179054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179058: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x179058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17905c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17905cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179060: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x179060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x179064: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179068: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x179068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17906c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x17906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x179070: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x179070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x179074: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x179074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x179078: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x179078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17907c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17907Cu;
    {
        const bool branch_taken_0x17907c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x179080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17907Cu;
        // 0x179080: 0x8e7145c0  lw          $s1, 0x45C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17907c) {
            ctx->pc = 0x1790A8u;
            goto label_1790a8;
        }
    }
    ctx->pc = 0x179084u;
    // 0x179084: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17908c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x17908cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x179090: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x179090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x179094: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x179094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x179098: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x179098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17909c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17909Cu;
    {
        const bool branch_taken_0x17909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17909c) {
            ctx->pc = 0x1790ACu;
            goto label_1790ac;
        }
    }
    ctx->pc = 0x1790A4u;
    // 0x1790a4: 0x0  nop
    ctx->pc = 0x1790a4u;
    // NOP
label_1790a8:
    // 0x1790a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1790a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1790ac:
    // 0x1790ac: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1790ACu;
    {
        const bool branch_taken_0x1790ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790ACu;
        // 0x1790b0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790ac) {
            ctx->pc = 0x1791ECu;
            goto label_1791ec;
        }
    }
    ctx->pc = 0x1790B4u;
    // 0x1790b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1790b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1790b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1790B8u;
    {
        const bool branch_taken_0x1790b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790b8) {
            ctx->pc = 0x1790BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1790B8u;
            // 0x1790bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1790D8u;
            goto label_1790d8;
        }
    }
    ctx->pc = 0x1790C0u;
    // 0x1790c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1790c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790c4: 0xc05e700  jal         func_179C00
    ctx->pc = 0x1790C4u;
    SET_GPR_U32(ctx, 31, 0x1790CCu);
    ctx->pc = 0x1790C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790C4u;
    // 0x1790c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C00u, 0x1790C4u, 0x1790CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790CCu;
label_1790cc:
    // 0x1790cc: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1790CCu;
    {
        const bool branch_taken_0x1790cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790CCu;
        // 0x1790d0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790cc) {
            ctx->pc = 0x1791ECu;
            goto label_1791ec;
        }
    }
    ctx->pc = 0x1790D4u;
    // 0x1790d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1790d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1790d8:
    // 0x1790d8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1790D8u;
    {
        const bool branch_taken_0x1790d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790D8u;
        // 0x1790dc: 0x3c140026  lui         $s4, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790d8) {
            ctx->pc = 0x1791C4u;
            goto label_1791c4;
        }
    }
    ctx->pc = 0x1790E0u;
    // 0x1790e0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1790e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1790e4: 0x0  nop
    ctx->pc = 0x1790e4u;
    // NOP
label_1790e8:
    // 0x1790e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1790e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790ec: 0xc05e7c8  jal         func_179F20
    ctx->pc = 0x1790ECu;
    SET_GPR_U32(ctx, 31, 0x1790F4u);
    ctx->pc = 0x1790F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790ECu;
    // 0x1790f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F20u, 0x1790ECu, 0x1790F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790F4u;
label_1790f4:
    // 0x1790f4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1790F4u;
    {
        const bool branch_taken_0x1790f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790f4) {
            ctx->pc = 0x1790F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1790F4u;
            // 0x1790f8: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179120u;
            goto label_179120;
        }
    }
    ctx->pc = 0x1790FCu;
    // 0x1790fc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1790fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179108: 0xc05e7c8  jal         func_179F20
    ctx->pc = 0x179108u;
    SET_GPR_U32(ctx, 31, 0x179110u);
    ctx->pc = 0x17910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179108u;
    // 0x17910c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F20u, 0x179108u, 0x179110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179110u;
label_179110:
    // 0x179110: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x179110u;
    {
        const bool branch_taken_0x179110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179110) {
            ctx->pc = 0x179114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179110u;
            // 0x179114: 0x24100202  addiu       $s0, $zero, 0x202 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179130u;
            goto label_179130;
        }
    }
    ctx->pc = 0x179118u;
    // 0x179118: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x179118u;
    {
        const bool branch_taken_0x179118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179118u;
        // 0x17911c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179118) {
            ctx->pc = 0x179134u;
            goto label_179134;
        }
    }
    ctx->pc = 0x179120u;
label_179120:
    // 0x179120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179124: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x179124u;
    {
        const bool branch_taken_0x179124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179124) {
            ctx->pc = 0x179128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179124u;
            // 0x179128: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1791B8u;
            goto label_1791b8;
        }
    }
    ctx->pc = 0x17912Cu;
    // 0x17912c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x17912cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_179130:
    // 0x179130: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x179130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_179134:
    // 0x179134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179138: 0x2685d550  addiu       $a1, $s4, -0x2AB0
    ctx->pc = 0x179138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956368));
    // 0x17913c: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x17913Cu;
    SET_GPR_U32(ctx, 31, 0x179144u);
    ctx->pc = 0x179140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17913Cu;
    // 0x179140: 0x26460540  addiu       $a2, $s2, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x17913Cu, 0x179144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179144u;
label_179144:
    // 0x179144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179148: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x179148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17914c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17914cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179150: 0xc05e624  jal         func_179890
    ctx->pc = 0x179150u;
    SET_GPR_U32(ctx, 31, 0x179158u);
    ctx->pc = 0x179154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179150u;
    // 0x179154: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179890u, 0x179150u, 0x179158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179158u;
label_179158:
    // 0x179158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17915c: 0x6000019  bltz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17915Cu;
    {
        const bool branch_taken_0x17915c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x17915c) {
            ctx->pc = 0x1791C4u;
            goto label_1791c4;
        }
    }
    ctx->pc = 0x179164u;
    // 0x179164: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x179168: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x179168u;
    {
        const bool branch_taken_0x179168 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179168u;
        // 0x17916c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179168) {
            ctx->pc = 0x179184u;
            goto label_179184;
        }
    }
    ctx->pc = 0x179170u;
    // 0x179170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179174: 0xc05e650  jal         func_179940
    ctx->pc = 0x179174u;
    SET_GPR_U32(ctx, 31, 0x17917Cu);
    ctx->pc = 0x179178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179174u;
    // 0x179178: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179940u, 0x179174u, 0x17917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17917Cu;
label_17917c:
    // 0x17917c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17917Cu;
    {
        const bool branch_taken_0x17917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17917c) {
            ctx->pc = 0x1791C4u;
            goto label_1791c4;
        }
    }
    ctx->pc = 0x179184u;
label_179184:
    // 0x179184: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x179184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x179188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17918c: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x17918cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x179190: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179194: 0xc05e6a0  jal         func_179A80
    ctx->pc = 0x179194u;
    SET_GPR_U32(ctx, 31, 0x17919Cu);
    ctx->pc = 0x179198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179194u;
    // 0x179198: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179A80u, 0x179194u, 0x17919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17919Cu;
label_17919c:
    // 0x17919c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17919Cu;
    {
        const bool branch_taken_0x17919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17919Cu;
        // 0x1791a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17919c) {
            ctx->pc = 0x1791C4u;
            goto label_1791c4;
        }
    }
    ctx->pc = 0x1791A4u;
    // 0x1791a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1791a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791a8: 0xc05e6e2  jal         func_179B88
    ctx->pc = 0x1791A8u;
    SET_GPR_U32(ctx, 31, 0x1791B0u);
    ctx->pc = 0x1791ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1791A8u;
    // 0x1791ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B88u, 0x1791A8u, 0x1791B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1791B0u;
label_1791b0:
    // 0x1791b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1791B0u;
    {
        const bool branch_taken_0x1791b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B0u;
        // 0x1791b4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b0) {
            ctx->pc = 0x1791C4u;
            goto label_1791c4;
        }
    }
    ctx->pc = 0x1791B8u;
label_1791b8:
    // 0x1791b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1791b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1791bc: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1791BCu;
    {
        const bool branch_taken_0x1791bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1791bc) {
            ctx->pc = 0x1791C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1791BCu;
            // 0x1791c0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1790E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1790e8;
        }
    }
    ctx->pc = 0x1791C4u;
label_1791c4:
    // 0x1791c4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1791c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1791c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1791cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1791CCu;
    {
        const bool branch_taken_0x1791cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1791D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791CCu;
        // 0x1791d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791cc) {
            ctx->pc = 0x1791D8u;
            goto label_1791d8;
        }
    }
    ctx->pc = 0x1791D4u;
    // 0x1791d4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1791d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1791d8:
    // 0x1791d8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1791d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1791dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1791dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1791e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1791e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1791e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1791e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1791e8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1791e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1791ec:
    // 0x1791ec: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1791ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1791f0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1791f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1791f4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1791f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1791f8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1791f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1791fc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1791fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x179200: 0x3e00008  jr          $ra
    ctx->pc = 0x179200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179200u;
        // 0x179204: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179208u;
}
