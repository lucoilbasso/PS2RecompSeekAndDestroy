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

// Function: cvt
// Address: 0x1d2938 - 0x1d2af8
void cvt_0x1d2938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cvt_0x1d2938");
#endif

    switch (ctx->pc) {
        case 0x1d29ccu: goto label_1d29cc;
        case 0x1d29f8u: goto label_1d29f8;
        case 0x1d2a44u: goto label_1d2a44;
        case 0x1d2a6cu: goto label_1d2a6c;
        case 0x1d2a90u: goto label_1d2a90;
        default: break;
    }

    ctx->pc = 0x1d2938u;

    // 0x1d2938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d2938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d293c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1d2940: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d2944: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1d2944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2948: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d294c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1d294cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2950: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d2950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d2954: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d2954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2958: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d2958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d295c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d295cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2960: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d2960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1d2964: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1d2964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2968: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d2968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1d296c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1d296cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2970: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1d2970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1d2974: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d2974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2978: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1d2978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1d297c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1d297cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2980: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1d2980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1d2984: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1d2984u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2988: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2988u;
    {
        const bool branch_taken_0x1d2988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2988u;
        // 0x1d298c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2988) {
            ctx->pc = 0x1D29ACu;
            goto label_1d29ac;
        }
    }
    ctx->pc = 0x1D2990u;
    // 0x1d2990: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x1d2990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x1d2994: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2994u;
    {
        const bool branch_taken_0x1d2994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2994u;
        // 0x1d2998: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2994) {
            ctx->pc = 0x1D29A4u;
            goto label_1d29a4;
        }
    }
    ctx->pc = 0x1D299Cu;
    // 0x1d299c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D299Cu;
    {
        const bool branch_taken_0x1d299c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D299Cu;
        // 0x1d29a0: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d299c) {
            ctx->pc = 0x1D29ACu;
            goto label_1d29ac;
        }
    }
    ctx->pc = 0x1D29A4u;
label_1d29a4:
    // 0x1d29a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d29a8: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1d29a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d29ac:
    // 0x1d29ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d29acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d29b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d29b4: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D29B4u;
    {
        const bool branch_taken_0x1d29b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d29b4) {
            ctx->pc = 0x1D29B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D29B4u;
            // 0x1d29b8: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29D8u;
            goto label_1d29d8;
        }
    }
    ctx->pc = 0x1D29BCu;
    // 0x1d29bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d29bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d29c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29c4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D29C4u;
    SET_GPR_U32(ctx, 31, 0x1D29CCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D29C4u, 0x1D29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29CCu;
label_1d29cc:
    // 0x1d29cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d29ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29d0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d29d4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1d29d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d29d8:
    // 0x1d29d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d29d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d29dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d29e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d29e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1d29e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29ec: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x1d29ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29f0: 0xc074bf2  jal         func_1D2FC8
    ctx->pc = 0x1D29F0u;
    SET_GPR_U32(ctx, 31, 0x1D29F8u);
    ctx->pc = 0x1D29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29F0u;
    // 0x1d29f4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FC8u, 0x1D29F0u, 0x1D29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29F8u;
label_1d29f8:
    // 0x1d29f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d29f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29fc: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x1d29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1d2a00: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2A00u;
    {
        const bool branch_taken_0x1d2a00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A00u;
        // 0x1d2a04: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a00) {
            ctx->pc = 0x1D2A10u;
            goto label_1d2a10;
        }
    }
    ctx->pc = 0x1D2A08u;
    // 0x1d2a08: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2A08u;
    {
        const bool branch_taken_0x1d2a08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A08u;
        // 0x1d2a0c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a08) {
            ctx->pc = 0x1D2A1Cu;
            goto label_1d2a1c;
        }
    }
    ctx->pc = 0x1D2A10u;
label_1d2a10:
    // 0x1d2a10: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d2a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d2a14: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D2A14u;
    {
        const bool branch_taken_0x1d2a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A14u;
        // 0x1d2a18: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a14) {
            ctx->pc = 0x1D2AB8u;
            goto label_1d2ab8;
        }
    }
    ctx->pc = 0x1D2A1Cu;
label_1d2a1c:
    // 0x1d2a1c: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D2A1Cu;
    {
        const bool branch_taken_0x1d2a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A1Cu;
        // 0x1d2a20: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a1c) {
            ctx->pc = 0x1D2A5Cu;
            goto label_1d2a5c;
        }
    }
    ctx->pc = 0x1D2A24u;
    // 0x1d2a24: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1d2a24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d2a28: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2a2c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D2A2Cu;
    {
        const bool branch_taken_0x1d2a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d2a2c) {
            ctx->pc = 0x1D2A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2A2Cu;
            // 0x1d2a30: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A58u;
            goto label_1d2a58;
        }
    }
    ctx->pc = 0x1D2A34u;
    // 0x1d2a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a3c: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A44u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D2A3Cu, 0x1D2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A44u;
label_1d2a44:
    // 0x1d2a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A44u;
        // 0x1d2a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2A54u;
            goto label_1d2a54;
        }
    }
    ctx->pc = 0x1D2A4Cu;
    // 0x1d2a4c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2a50: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1d2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1d2a54:
    // 0x1d2a54: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d2a58:
    // 0x1d2a58: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d2a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d2a5c:
    // 0x1d2a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a64: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D2A64u;
    SET_GPR_U32(ctx, 31, 0x1D2A6Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D2A64u, 0x1D2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A6Cu;
label_1d2a6c:
    // 0x1d2a6c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d2a70: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1d2a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1d2a74: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x1d2a74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x1d2a78: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1d2a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d2a7c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d2a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d2a80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2A80u;
    {
        const bool branch_taken_0x1d2a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A80u;
        // 0x1d2a84: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a80) {
            ctx->pc = 0x1D2ABCu;
            goto label_1d2abc;
        }
    }
    ctx->pc = 0x1D2A88u;
    // 0x1d2a88: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1d2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2a8c: 0x0  nop
    ctx->pc = 0x1d2a8cu;
    // NOP
label_1d2a90:
    // 0x1d2a90: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2a94: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d2a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2a98: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1d2a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d2a9c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d2aa0: 0x0  nop
    ctx->pc = 0x1d2aa0u;
    // NOP
    // 0x1d2aa4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2AA4u;
    {
        const bool branch_taken_0x1d2aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AA4u;
        // 0x1d2aa8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aa4) {
            ctx->pc = 0x1D2A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2a90;
        }
    }
    ctx->pc = 0x1D2AACu;
    // 0x1d2aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2AACu;
    {
        const bool branch_taken_0x1d2aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AACu;
        // 0x1d2ab0: 0x741823  subu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aac) {
            ctx->pc = 0x1D2AC0u;
            goto label_1d2ac0;
        }
    }
    ctx->pc = 0x1D2AB4u;
    // 0x1d2ab4: 0x0  nop
    ctx->pc = 0x1d2ab4u;
    // NOP
label_1d2ab8:
    // 0x1d2ab8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d2abc:
    // 0x1d2abc: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x1d2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1d2ac0:
    // 0x1d2ac0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d2ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ac4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x1d2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x1d2ac8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d2ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2acc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d2accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2ad0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d2ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2ad4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d2ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d2ad8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d2ad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2adc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d2adcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2ae0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d2ae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2ae4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d2ae8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d2ae8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2aec: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d2aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d2af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AF0u;
        // 0x1d2af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2AF8u;
}
