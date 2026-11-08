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

// Function: MotionCtrlSetup__8WcEntityi
// Address: 0x185930 - 0x185fbc
void MotionCtrlSetup__8WcEntityi_0x185930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionCtrlSetup__8WcEntityi_0x185930");
#endif

    switch (ctx->pc) {
        case 0x185968u: goto label_185968;
        case 0x1859b4u: goto label_1859b4;
        case 0x1859d0u: goto label_1859d0;
        case 0x185a1cu: goto label_185a1c;
        case 0x185a58u: goto label_185a58;
        case 0x185c08u: goto label_185c08;
        case 0x185d00u: goto label_185d00;
        default: break;
    }

    ctx->pc = 0x185930u;

    // 0x185930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x185930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x185934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18593c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x185940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x185944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x185944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x185948: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x185948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18594c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x185950: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x185950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x185954: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x185954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x185958: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x185958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x18595c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18595Cu;
    {
        const bool branch_taken_0x18595c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18595Cu;
        // 0x185960: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18595c) {
            ctx->pc = 0x18598Cu;
            goto label_18598c;
        }
    }
    ctx->pc = 0x185964u;
    // 0x185964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_185968:
    // 0x185968: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x185968u;
    {
        const bool branch_taken_0x185968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185968u;
        // 0x18596c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185968) {
            ctx->pc = 0x185990u;
            goto label_185990;
        }
    }
    ctx->pc = 0x185970u;
    // 0x185970: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x185974: 0x0  nop
    ctx->pc = 0x185974u;
    // NOP
    // 0x185978: 0x0  nop
    ctx->pc = 0x185978u;
    // NOP
    // 0x18597c: 0x0  nop
    ctx->pc = 0x18597cu;
    // NOP
    // 0x185980: 0x0  nop
    ctx->pc = 0x185980u;
    // NOP
    // 0x185984: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x185984u;
    {
        const bool branch_taken_0x185984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185984) {
            ctx->pc = 0x185988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185984u;
            // 0x185988: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185968;
        }
    }
    ctx->pc = 0x18598Cu;
label_18598c:
    // 0x18598c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185990:
    // 0x185990: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x185990u;
    {
        const bool branch_taken_0x185990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185990u;
        // 0x185994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185990) {
            ctx->pc = 0x18599Cu;
            goto label_18599c;
        }
    }
    ctx->pc = 0x185998u;
    // 0x185998: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18599c:
    // 0x18599c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859a0: 0x54800032  bnel        $a0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1859A0u;
    {
        const bool branch_taken_0x1859a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1859a0) {
            ctx->pc = 0x1859A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1859A0u;
            // 0x1859a4: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A6Cu;
            goto label_185a6c;
        }
    }
    ctx->pc = 0x1859A8u;
    // 0x1859a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1859a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859ac: 0xc069028  jal         func_1A40A0
    ctx->pc = 0x1859ACu;
    SET_GPR_U32(ctx, 31, 0x1859B4u);
    ctx->pc = 0x1859B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859ACu;
    // 0x1859b0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A40A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A40A0u, 0x1859ACu, 0x1859B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859B4u;
label_1859b4:
    // 0x1859b4: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1859b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1859b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859bc: 0x111603  sra         $v0, $s1, 24
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 24));
    // 0x1859c0: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x1859c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1859c4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1859C4u;
    {
        const bool branch_taken_0x1859c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859C4u;
        // 0x1859c8: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859c4) {
            ctx->pc = 0x185A28u;
            goto label_185a28;
        }
    }
    ctx->pc = 0x1859CCu;
    // 0x1859cc: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
label_1859d0:
    // 0x1859d0: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1859D0u;
    {
        const bool branch_taken_0x1859d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859D0u;
        // 0x1859d4: 0x8c720008  lw          $s2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859d0) {
            ctx->pc = 0x1859ECu;
            goto label_1859ec;
        }
    }
    ctx->pc = 0x1859D8u;
    // 0x1859d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1859dc: 0x532024  and         $a0, $v0, $s3
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1859e0: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x1859e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x1859e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1859E4u;
    {
        const bool branch_taken_0x1859e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859e4) {
            ctx->pc = 0x185A00u;
            goto label_185a00;
        }
    }
    ctx->pc = 0x1859ECu;
label_1859ec:
    // 0x1859ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1859ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1859f0: 0x50530006  beql        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1859F0u;
    {
        const bool branch_taken_0x1859f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1859f0) {
            ctx->pc = 0x1859F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1859F0u;
            // 0x1859f4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A0Cu;
            goto label_185a0c;
        }
    }
    ctx->pc = 0x1859F8u;
    // 0x1859f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1859F8u;
    {
        const bool branch_taken_0x1859f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859F8u;
        // 0x1859fc: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859f8) {
            ctx->pc = 0x185A20u;
            goto label_185a20;
        }
    }
    ctx->pc = 0x185A00u;
label_185a00:
    // 0x185a00: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x185A00u;
    {
        const bool branch_taken_0x185a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a00) {
            ctx->pc = 0x185A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185A00u;
            // 0x185a04: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A20u;
            goto label_185a20;
        }
    }
    ctx->pc = 0x185A08u;
    // 0x185a08: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x185a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_185a0c:
    // 0x185a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a14: 0xc068866  jal         func_1A2198
    ctx->pc = 0x185A14u;
    SET_GPR_U32(ctx, 31, 0x185A1Cu);
    ctx->pc = 0x185A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A14u;
    // 0x185a18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x185A14u, 0x185A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A1Cu;
label_185a1c:
    // 0x185a1c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x185a1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185a20:
    // 0x185a20: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x185A20u;
    {
        const bool branch_taken_0x185a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185a20) {
            ctx->pc = 0x1859D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1859d0;
        }
    }
    ctx->pc = 0x185A28u;
label_185a28:
    // 0x185a28: 0x26020148  addiu       $v0, $s0, 0x148
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x185a2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x185a30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185a34: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x185a34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x185a38: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x185a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x185a3c: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x185a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
    // 0x185a40: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x185A40u;
    {
        const bool branch_taken_0x185a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A40u;
        // 0x185a44: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a40) {
            ctx->pc = 0x185A64u;
            goto label_185a64;
        }
    }
    ctx->pc = 0x185A48u;
    // 0x185a48: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x185a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x185a4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a50: 0xc068584  jal         func_1A1610
    ctx->pc = 0x185A50u;
    SET_GPR_U32(ctx, 31, 0x185A58u);
    ctx->pc = 0x185A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A50u;
    // 0x185a54: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x185A50u, 0x185A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A58u;
label_185a58:
    // 0x185a58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x185a5c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x185a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x185a60: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x185a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_185a64:
    // 0x185a64: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x185a68: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x185a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_185a6c:
    // 0x185a6c: 0x54400149  bnel        $v0, $zero, . + 4 + (0x149 << 2)
    ctx->pc = 0x185A6Cu;
    {
        const bool branch_taken_0x185a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185a6c) {
            ctx->pc = 0x185A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185A6Cu;
            // 0x185a70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185A74u;
    // 0x185a74: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x185a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x185a78: 0x122200e5  beq         $s1, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x185A78u;
    {
        const bool branch_taken_0x185a78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A78u;
        // 0x185a7c: 0x2a220019  slti        $v0, $s1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a78) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185A80u;
    // 0x185a80: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x185A80u;
    {
        const bool branch_taken_0x185a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A80u;
        // 0x185a84: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a80) {
            ctx->pc = 0x185AF8u;
            goto label_185af8;
        }
    }
    ctx->pc = 0x185A88u;
    // 0x185a88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185a8c: 0x1223003e  beq         $s1, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x185A8Cu;
    {
        const bool branch_taken_0x185a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x185A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A8Cu;
        // 0x185a90: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a8c) {
            ctx->pc = 0x185B88u;
            goto label_185b88;
        }
    }
    ctx->pc = 0x185A94u;
    // 0x185a94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185A94u;
    {
        const bool branch_taken_0x185a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A94u;
        // 0x185a98: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a94) {
            ctx->pc = 0x185AC0u;
            goto label_185ac0;
        }
    }
    ctx->pc = 0x185A9Cu;
    // 0x185a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185aa0: 0x12220035  beq         $s1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x185AA0u;
    {
        const bool branch_taken_0x185aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AA0u;
        // 0x185aa4: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185aa0) {
            ctx->pc = 0x185B78u;
            goto label_185b78;
        }
    }
    ctx->pc = 0x185AA8u;
    // 0x185aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185aac: 0x12220034  beq         $s1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x185AACu;
    {
        const bool branch_taken_0x185aac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AACu;
        // 0x185ab0: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185aac) {
            ctx->pc = 0x185B80u;
            goto label_185b80;
        }
    }
    ctx->pc = 0x185AB4u;
    // 0x185ab4: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x185AB4u;
    {
        const bool branch_taken_0x185ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AB4u;
        // 0x185ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ab4) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185ABCu;
    // 0x185abc: 0x0  nop
    ctx->pc = 0x185abcu;
    // NOP
label_185ac0:
    // 0x185ac0: 0x1222004f  beq         $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x185AC0u;
    {
        const bool branch_taken_0x185ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC0u;
        // 0x185ac4: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ac0) {
            ctx->pc = 0x185C00u;
            goto label_185c00;
        }
    }
    ctx->pc = 0x185AC8u;
    // 0x185ac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185AC8u;
    {
        const bool branch_taken_0x185ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC8u;
        // 0x185acc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ac8) {
            ctx->pc = 0x185AE8u;
            goto label_185ae8;
        }
    }
    ctx->pc = 0x185AD0u;
    // 0x185ad0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x185ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x185ad4: 0x122200ae  beq         $s1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x185AD4u;
    {
        const bool branch_taken_0x185ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AD4u;
        // 0x185ad8: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ad4) {
            ctx->pc = 0x185D90u;
            goto label_185d90;
        }
    }
    ctx->pc = 0x185ADCu;
    // 0x185adc: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x185ADCu;
    {
        const bool branch_taken_0x185adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185ADCu;
        // 0x185ae0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185adc) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185AE4u;
    // 0x185ae4: 0x0  nop
    ctx->pc = 0x185ae4u;
    // NOP
label_185ae8:
    // 0x185ae8: 0x1222004b  beq         $s1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x185AE8u;
    {
        const bool branch_taken_0x185ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AE8u;
        // 0x185aec: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ae8) {
            ctx->pc = 0x185C18u;
            goto label_185c18;
        }
    }
    ctx->pc = 0x185AF0u;
    // 0x185af0: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x185AF0u;
    {
        const bool branch_taken_0x185af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF0u;
        // 0x185af4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185af0) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185AF8u;
label_185af8:
    // 0x185af8: 0x1222007f  beq         $s1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x185AF8u;
    {
        const bool branch_taken_0x185af8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF8u;
        // 0x185afc: 0x2a220041  slti        $v0, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185af8) {
            ctx->pc = 0x185CF8u;
            goto label_185cf8;
        }
    }
    ctx->pc = 0x185B00u;
    // 0x185b00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x185B00u;
    {
        const bool branch_taken_0x185b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B00u;
        // 0x185b04: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b00) {
            ctx->pc = 0x185B40u;
            goto label_185b40;
        }
    }
    ctx->pc = 0x185B08u;
    // 0x185b08: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x185b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x185b0c: 0x122200e2  beq         $s1, $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x185B0Cu;
    {
        const bool branch_taken_0x185b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B0Cu;
        // 0x185b10: 0x2a220031  slti        $v0, $s1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b0c) {
            ctx->pc = 0x185E98u;
            goto label_185e98;
        }
    }
    ctx->pc = 0x185B14u;
    // 0x185b14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185B14u;
    {
        const bool branch_taken_0x185b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B14u;
        // 0x185b18: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b14) {
            ctx->pc = 0x185B30u;
            goto label_185b30;
        }
    }
    ctx->pc = 0x185B1Cu;
    // 0x185b1c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x185b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x185b20: 0x12220053  beq         $s1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B20u;
        // 0x185b24: 0x26060038  addiu       $a2, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185C70u;
            goto label_185c70;
        }
    }
    ctx->pc = 0x185B28u;
    // 0x185b28: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x185B28u;
    {
        const bool branch_taken_0x185b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B28u;
        // 0x185b2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b28) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185B30u;
label_185b30:
    // 0x185b30: 0x1222009b  beq         $s1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x185B30u;
    {
        const bool branch_taken_0x185b30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B30u;
        // 0x185b34: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b30) {
            ctx->pc = 0x185DA0u;
            goto label_185da0;
        }
    }
    ctx->pc = 0x185B38u;
    // 0x185b38: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x185B38u;
    {
        const bool branch_taken_0x185b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B38u;
        // 0x185b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b38) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185B40u;
label_185b40:
    // 0x185b40: 0x12220073  beq         $s1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x185B40u;
    {
        const bool branch_taken_0x185b40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B40u;
        // 0x185b44: 0x2a220101  slti        $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b40) {
            ctx->pc = 0x185D10u;
            goto label_185d10;
        }
    }
    ctx->pc = 0x185B48u;
    // 0x185b48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185B48u;
    {
        const bool branch_taken_0x185b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B48u;
        // 0x185b4c: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b48) {
            ctx->pc = 0x185B68u;
            goto label_185b68;
        }
    }
    ctx->pc = 0x185B50u;
    // 0x185b50: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x185b54: 0x1222006f  beq         $s1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x185B54u;
    {
        const bool branch_taken_0x185b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B54u;
        // 0x185b58: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b54) {
            ctx->pc = 0x185D14u;
            goto label_185d14;
        }
    }
    ctx->pc = 0x185B5Cu;
    // 0x185b5c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x185B5Cu;
    {
        const bool branch_taken_0x185b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B5Cu;
        // 0x185b60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b5c) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185B64u;
    // 0x185b64: 0x0  nop
    ctx->pc = 0x185b64u;
    // NOP
label_185b68:
    // 0x185b68: 0x122200ed  beq         $s1, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x185B68u;
    {
        const bool branch_taken_0x185b68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B68u;
        // 0x185b6c: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b68) {
            ctx->pc = 0x185F20u;
            goto label_185f20;
        }
    }
    ctx->pc = 0x185B70u;
    // 0x185b70: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x185B70u;
    {
        const bool branch_taken_0x185b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B70u;
        // 0x185b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b70) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185B78u;
label_185b78:
    // 0x185b78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x185B78u;
    {
        const bool branch_taken_0x185b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B78u;
        // 0x185b7c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b78) {
            ctx->pc = 0x185B90u;
            goto label_185b90;
        }
    }
    ctx->pc = 0x185B80u;
label_185b80:
    // 0x185b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185B80u;
    {
        const bool branch_taken_0x185b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B80u;
        // 0x185b84: 0x260500d4  addiu       $a1, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b80) {
            ctx->pc = 0x185B90u;
            goto label_185b90;
        }
    }
    ctx->pc = 0x185B88u;
label_185b88:
    // 0x185b88: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185b8c: 0x260500d8  addiu       $a1, $s0, 0xD8
    ctx->pc = 0x185b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_185b90:
    // 0x185b90: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185b94: 0x244662f0  addiu       $a2, $v0, 0x62F0
    ctx->pc = 0x185b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
    // 0x185b98: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185b98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185b9c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ba0: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185ba4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185ba8: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185bac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185bb0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185bb4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185bb8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185bbc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185bc0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185bc4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185bc8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185bcc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185bd0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x185BD0u;
    {
        const bool branch_taken_0x185bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BD0u;
        // 0x185bd4: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bd0) {
            ctx->pc = 0x185BE8u;
            goto label_185be8;
        }
    }
    ctx->pc = 0x185BD8u;
    // 0x185bd8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x185bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x185bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185BDCu;
    {
        const bool branch_taken_0x185bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BDCu;
        // 0x185be0: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bdc) {
            ctx->pc = 0x185BECu;
            goto label_185bec;
        }
    }
    ctx->pc = 0x185BE4u;
    // 0x185be4: 0x0  nop
    ctx->pc = 0x185be4u;
    // NOP
label_185be8:
    // 0x185be8: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185be8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_185bec:
    // 0x185bec: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x185becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x185bf0: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x185bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x185bf4: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x185BF4u;
    {
        const bool branch_taken_0x185bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BF4u;
        // 0x185bf8: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bf4) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185BFCu;
    // 0x185bfc: 0x0  nop
    ctx->pc = 0x185bfcu;
    // NOP
label_185c00:
    // 0x185c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x185C00u;
    {
        const bool branch_taken_0x185c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C00u;
        // 0x185c04: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c00) {
            ctx->pc = 0x185C18u;
            goto label_185c18;
        }
    }
    ctx->pc = 0x185C08u;
label_185c08:
    // 0x185c08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x185c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x185c0c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x185C0Cu;
    {
        const bool branch_taken_0x185c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C0Cu;
        // 0x185c10: 0xa4a20008  sh          $v0, 0x8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c0c) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185C14u;
    // 0x185c14: 0x0  nop
    ctx->pc = 0x185c14u;
    // NOP
label_185c18:
    // 0x185c18: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185c1c: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185c20: 0x24486350  addiu       $t0, $v0, 0x6350
    ctx->pc = 0x185c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185c24: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185c24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c2c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c30: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x185c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c34: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185c34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c38: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185c38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c3c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185c40: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185c44: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185c48: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185c4c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185c50: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185c54: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185c58: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185c5c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185c60: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x185C60u;
    {
        const bool branch_taken_0x185c60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C60u;
        // 0x185c64: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c60) {
            ctx->pc = 0x185CD0u;
            goto label_185cd0;
        }
    }
    ctx->pc = 0x185C68u;
    // 0x185c68: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x185C68u;
    {
        const bool branch_taken_0x185c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C68u;
        // 0x185c6c: 0xa4830008  sh          $v1, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c68) {
            ctx->pc = 0x185CD4u;
            goto label_185cd4;
        }
    }
    ctx->pc = 0x185C70u;
label_185c70:
    // 0x185c70: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185c74: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185c78: 0x24486350  addiu       $t0, $v0, 0x6350
    ctx->pc = 0x185c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185c7c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c84: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185c84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c88: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x185c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c8c: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c90: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185c90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c94: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185c98: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185c9c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185ca0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185ca4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185ca8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185cac: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185cb0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185cb4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185cb8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x185CB8u;
    {
        const bool branch_taken_0x185cb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CB8u;
        // 0x185cbc: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cb8) {
            ctx->pc = 0x185CD0u;
            goto label_185cd0;
        }
    }
    ctx->pc = 0x185CC0u;
    // 0x185cc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x185cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185cc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185CC4u;
    {
        const bool branch_taken_0x185cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CC4u;
        // 0x185cc8: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cc4) {
            ctx->pc = 0x185CD4u;
            goto label_185cd4;
        }
    }
    ctx->pc = 0x185CCCu;
    // 0x185ccc: 0x0  nop
    ctx->pc = 0x185cccu;
    // NOP
label_185cd0:
    // 0x185cd0: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_185cd4:
    // 0x185cd4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185cd8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x185cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x185cdc: 0x244244a8  addiu       $v0, $v0, 0x44A8
    ctx->pc = 0x185cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17576));
    // 0x185ce0: 0xaca80014  sw          $t0, 0x14($a1)
    ctx->pc = 0x185ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
    // 0x185ce4: 0x14c0ffc8  bnez        $a2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x185CE4u;
    {
        const bool branch_taken_0x185ce4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x185CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CE4u;
        // 0x185ce8: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ce4) {
            ctx->pc = 0x185C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185c08;
        }
    }
    ctx->pc = 0x185CECu;
    // 0x185cec: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x185CECu;
    {
        const bool branch_taken_0x185cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CECu;
        // 0x185cf0: 0xa4a00008  sh          $zero, 0x8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cec) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185CF4u;
    // 0x185cf4: 0x0  nop
    ctx->pc = 0x185cf4u;
    // NOP
label_185cf8:
    // 0x185cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x185CF8u;
    {
        const bool branch_taken_0x185cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CF8u;
        // 0x185cfc: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cf8) {
            ctx->pc = 0x185D14u;
            goto label_185d14;
        }
    }
    ctx->pc = 0x185D00u;
label_185d00:
    // 0x185d00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x185d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x185d04: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x185D04u;
    {
        const bool branch_taken_0x185d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D04u;
        // 0x185d08: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d04) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185D0Cu;
    // 0x185d0c: 0x0  nop
    ctx->pc = 0x185d0cu;
    // NOP
label_185d10:
    // 0x185d10: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_185d14:
    // 0x185d14: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185d18: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185d1c: 0x244763b0  addiu       $a3, $v0, 0x63B0
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x185d20: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185d20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x185d24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d28: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x185d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d30: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185d30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d34: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185d34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d38: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185d3c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185d40: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185d44: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185d48: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185d4c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185d50: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185d54: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185d58: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185d5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x185D5Cu;
    {
        const bool branch_taken_0x185d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D5Cu;
        // 0x185d60: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d5c) {
            ctx->pc = 0x185D70u;
            goto label_185d70;
        }
    }
    ctx->pc = 0x185D64u;
    // 0x185d64: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x185d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x185d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185D68u;
    {
        const bool branch_taken_0x185d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D68u;
        // 0x185d6c: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d68) {
            ctx->pc = 0x185D74u;
            goto label_185d74;
        }
    }
    ctx->pc = 0x185D70u;
label_185d70:
    // 0x185d70: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185d70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_185d74:
    // 0x185d74: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x185d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x185d78: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x185d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x185d7c: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x185D7Cu;
    {
        const bool branch_taken_0x185d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D7Cu;
        // 0x185d80: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d7c) {
            ctx->pc = 0x185D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185d00;
        }
    }
    ctx->pc = 0x185D84u;
    // 0x185d84: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x185D84u;
    {
        const bool branch_taken_0x185d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D84u;
        // 0x185d88: 0xa4600008  sh          $zero, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d84) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185D8Cu;
    // 0x185d8c: 0x0  nop
    ctx->pc = 0x185d8cu;
    // NOP
label_185d90:
    // 0x185d90: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x185d94: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185d98: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x185D98u;
    {
        const bool branch_taken_0x185d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D98u;
        // 0x185d9c: 0x244762f0  addiu       $a3, $v0, 0x62F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d98) {
            ctx->pc = 0x185F2Cu;
            goto label_185f2c;
        }
    }
    ctx->pc = 0x185DA0u;
label_185da0:
    // 0x185da0: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x185da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x185da4: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185da8: 0x24476350  addiu       $a3, $v0, 0x6350
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185dac: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185dacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185db0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185db4: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185db4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185db8: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185db8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185dbc: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185dc0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185dc4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185dc8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185dcc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185dd0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185dd4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185dd8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185ddc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185de0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185de4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x185DE4u;
    {
        const bool branch_taken_0x185de4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE4u;
        // 0x185de8: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185de4) {
            ctx->pc = 0x185DF8u;
            goto label_185df8;
        }
    }
    ctx->pc = 0x185DECu;
    // 0x185dec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x185decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185DF0u;
    {
        const bool branch_taken_0x185df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DF0u;
        // 0x185df4: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185df0) {
            ctx->pc = 0x185DFCu;
            goto label_185dfc;
        }
    }
    ctx->pc = 0x185DF8u;
label_185df8:
    // 0x185df8: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185df8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_185dfc:
    // 0x185dfc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185e00: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185e04: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x185E04u;
    {
        const bool branch_taken_0x185e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E04u;
        // 0x185e08: 0x24421d98  addiu       $v0, $v0, 0x1D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e04) {
            ctx->pc = 0x185F88u;
            goto label_185f88;
        }
    }
    ctx->pc = 0x185E0Cu;
    // 0x185e0c: 0x0  nop
    ctx->pc = 0x185e0cu;
    // NOP
label_185e10:
    // 0x185e10: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185e14: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x185e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x185e18: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185e1c: 0x24476350  addiu       $a3, $v0, 0x6350
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185e20: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185e20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e28: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185e28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e2c: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e30: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185e30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e34: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185e38: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185e3c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185e40: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185e44: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185e48: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185e4c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185e50: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185e54: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185e58: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x185E58u;
    {
        const bool branch_taken_0x185e58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E58u;
        // 0x185e5c: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e58) {
            ctx->pc = 0x185E70u;
            goto label_185e70;
        }
    }
    ctx->pc = 0x185E60u;
    // 0x185e60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x185e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185E64u;
    {
        const bool branch_taken_0x185e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E64u;
        // 0x185e68: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e64) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185E6Cu;
    // 0x185e6c: 0x0  nop
    ctx->pc = 0x185e6cu;
    // NOP
label_185e70:
    // 0x185e70: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185e70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_185e74:
    // 0x185e74: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185e78: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185e7c: 0x24421d98  addiu       $v0, $v0, 0x1D98
    ctx->pc = 0x185e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7576));
    // 0x185e80: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x185e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x185e84: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x185e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x185e88: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x185e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x185e8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x185e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x185e90: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x185E90u;
    {
        const bool branch_taken_0x185e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E90u;
        // 0x185e94: 0xa482000a  sh          $v0, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e90) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185E98u;
label_185e98:
    // 0x185e98: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185e9c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x185e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x185ea0: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185ea4: 0x24476350  addiu       $a3, $v0, 0x6350
    ctx->pc = 0x185ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185ea8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185eac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185eb0: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185eb4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185eb8: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185ebc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185ec0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185ec4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185ec8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185ecc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185ed0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185ed4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185ed8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185edc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185ee0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x185EE0u;
    {
        const bool branch_taken_0x185ee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EE0u;
        // 0x185ee4: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ee0) {
            ctx->pc = 0x185EF8u;
            goto label_185ef8;
        }
    }
    ctx->pc = 0x185EE8u;
    // 0x185ee8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x185ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185EECu;
    {
        const bool branch_taken_0x185eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EECu;
        // 0x185ef0: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eec) {
            ctx->pc = 0x185EFCu;
            goto label_185efc;
        }
    }
    ctx->pc = 0x185EF4u;
    // 0x185ef4: 0x0  nop
    ctx->pc = 0x185ef4u;
    // NOP
label_185ef8:
    // 0x185ef8: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_185efc:
    // 0x185efc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185f00: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185f04: 0x24421d98  addiu       $v0, $v0, 0x1D98
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7576));
    // 0x185f08: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x185f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x185f0c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x185f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x185f10: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x185f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x185f14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x185f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x185f18: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x185F18u;
    {
        const bool branch_taken_0x185f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F18u;
        // 0x185f1c: 0xa482000a  sh          $v0, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f18) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185F20u;
label_185f20:
    // 0x185f20: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x185f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x185f24: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185f28: 0x244763b0  addiu       $a3, $v0, 0x63B0
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
label_185f2c:
    // 0x185f2c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f34: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185f34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f38: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185f38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f3c: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f40: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185f44: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185f48: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185f4c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185f50: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185f54: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185f58: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185f5c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185f60: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185f64: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x185F64u;
    {
        const bool branch_taken_0x185f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F64u;
        // 0x185f68: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f64) {
            ctx->pc = 0x185F78u;
            goto label_185f78;
        }
    }
    ctx->pc = 0x185F6Cu;
    // 0x185f6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x185f70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185F70u;
    {
        const bool branch_taken_0x185f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F70u;
        // 0x185f74: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f70) {
            ctx->pc = 0x185F7Cu;
            goto label_185f7c;
        }
    }
    ctx->pc = 0x185F78u;
label_185f78:
    // 0x185f78: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185f78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
label_185f7c:
    // 0x185f7c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185f80: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185f84: 0x24421c40  addiu       $v0, $v0, 0x1C40
    ctx->pc = 0x185f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7232));
label_185f88:
    // 0x185f88: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x185f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x185f8c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x185f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_185f90:
    // 0x185f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185f94:
    // 0x185f94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x185f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185fa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x185fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x185fa4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x185fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185fa8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x185fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x185fac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x185facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185fb0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x185fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x185fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x185FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB4u;
        // 0x185fb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185FBCu;
}
