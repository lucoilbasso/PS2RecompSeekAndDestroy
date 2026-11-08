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

// Function: scalbn
// Address: 0x1c7f88 - 0x1c816c
void scalbn_0x1c7f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbn_0x1c7f88");
#endif

    switch (ctx->pc) {
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c8024u: goto label_1c8024;
        case 0x1c804cu: goto label_1c804c;
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c810cu: goto label_1c810c;
        case 0x1c8158u: goto label_1c8158;
        default: break;
    }

    ctx->pc = 0x1c7f88u;

    // 0x1c7f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7f8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c7f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7f94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c7f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7f9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c7f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fa0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1c7fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c7fa4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c7fa8: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x1c7fa8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c7fac: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x1c7facu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x1c7fb0: 0xf11024  and         $v0, $a3, $s1
    ctx->pc = 0x1c7fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x1c7fb4: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x1c7fb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1c7fb8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C7FB8u;
    {
        const bool branch_taken_0x1c7fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FB8u;
        // 0x1c7fbc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fb8) {
            ctx->pc = 0x1C8030u;
            goto label_1c8030;
        }
    }
    ctx->pc = 0x1C7FC0u;
    // 0x1c7fc0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1c7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1c7fc4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c7fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c7fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c7fcc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1c7fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1c7fd0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1c7fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c7fd4: 0x50600061  beql        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1C7FD4u;
    {
        const bool branch_taken_0x1c7fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7fd4) {
            ctx->pc = 0x1C7FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7FD4u;
            // 0x1c7fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C815Cu;
            goto label_1c815c;
        }
    }
    ctx->pc = 0x1C7FDCu;
    // 0x1c7fdc: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x1c7fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x1c7fe0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c7fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c7fe4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7FE4u;
    SET_GPR_U32(ctx, 31, 0x1C7FECu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7FE4u, 0x1C7FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FECu;
label_1c7fec:
    // 0x1c7fec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c7fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ff0: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x1c7ff0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c7ff4: 0xf11824  and         $v1, $a3, $s1
    ctx->pc = 0x1c7ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x1c7ff8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c7ffc: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x1c7ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x1c8000: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x1c8004: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c8004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8008: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8008u;
    {
        const bool branch_taken_0x1c8008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8008u;
        // 0x1c800c: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8008) {
            ctx->pc = 0x1C8030u;
            goto label_1c8030;
        }
    }
    ctx->pc = 0x1C8010u;
    // 0x1c8010: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8014: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8018: 0xdc45bbd0  ld          $a1, -0x4430($v0)
    ctx->pc = 0x1c8018u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BBD0u));
    // 0x1c801c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C801Cu;
    SET_GPR_U32(ctx, 31, 0x1C8024u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C801Cu, 0x1C8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8024u;
label_1c8024:
    // 0x1c8024: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C8024u;
    {
        const bool branch_taken_0x1c8024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8024u;
        // 0x1c8028: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8024) {
            ctx->pc = 0x1C815Cu;
            goto label_1c815c;
        }
    }
    ctx->pc = 0x1C802Cu;
    // 0x1c802c: 0x0  nop
    ctx->pc = 0x1c802cu;
    // NOP
label_1c8030:
    // 0x1c8030: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1c8030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1c8034: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8034u;
    {
        const bool branch_taken_0x1c8034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8034u;
        // 0x1c8038: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8034) {
            ctx->pc = 0x1C8058u;
            goto label_1c8058;
        }
    }
    ctx->pc = 0x1C803Cu;
    // 0x1c803c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8040: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c8040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8044: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C8044u;
    SET_GPR_U32(ctx, 31, 0x1C804Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C8044u, 0x1C804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C804Cu;
label_1c804c:
    // 0x1c804c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C804Cu;
    {
        const bool branch_taken_0x1c804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C804Cu;
        // 0x1c8050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c804c) {
            ctx->pc = 0x1C815Cu;
            goto label_1c815c;
        }
    }
    ctx->pc = 0x1C8054u;
    // 0x1c8054: 0x0  nop
    ctx->pc = 0x1c8054u;
    // NOP
label_1c8058:
    // 0x1c8058: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x1c8058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x1c805c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C805Cu;
    {
        const bool branch_taken_0x1c805c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C805Cu;
        // 0x1c8060: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c805c) {
            ctx->pc = 0x1C8078u;
            goto label_1c8078;
        }
    }
    ctx->pc = 0x1C8064u;
    // 0x1c8064: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c8064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8068: 0xdc50bbd8  ld          $s0, -0x4428($v0)
    ctx->pc = 0x1c8068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294949848)));
    // 0x1c806c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C806Cu;
    {
        const bool branch_taken_0x1c806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c806c) {
            ctx->pc = 0x1C80F0u;
            goto label_1c80f0;
        }
    }
    ctx->pc = 0x1C8074u;
    // 0x1c8074: 0x0  nop
    ctx->pc = 0x1c8074u;
    // NOP
label_1c8078:
    // 0x1c8078: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8078u;
    {
        const bool branch_taken_0x1c8078 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c8078) {
            ctx->pc = 0x1C807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8078u;
            // 0x1c807c: 0x2862ffcb  slti        $v0, $v1, -0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C80B8u;
            goto label_1c80b8;
        }
    }
    ctx->pc = 0x1C8080u;
    // 0x1c8080: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1c8080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1c8084: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x1c8084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x1c8088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c808c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c808cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8090: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c8090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c8094: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1c8094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1c8098: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c8098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c809c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c80a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c80a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c80a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c80a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c80a8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1c80a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c80ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c80acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C80B0u;
    {
        const bool branch_taken_0x1c80b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80B0u;
        // 0x1c80b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80b0) {
            ctx->pc = 0x1C815Cu;
            goto label_1c815c;
        }
    }
    ctx->pc = 0x1C80B8u;
label_1c80b8:
    // 0x1c80b8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C80B8u;
    {
        const bool branch_taken_0x1c80b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80b8) {
            ctx->pc = 0x1C80BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C80B8u;
            // 0x1c80bc: 0x24630036  addiu       $v1, $v1, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8118u;
            goto label_1c8118;
        }
    }
    ctx->pc = 0x1C80C0u;
    // 0x1c80c0: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x1c80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x1c80c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c80c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c80c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C80C8u;
    {
        const bool branch_taken_0x1c80c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80C8u;
        // 0x1c80cc: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80c8) {
            ctx->pc = 0x1C80E8u;
            goto label_1c80e8;
        }
    }
    ctx->pc = 0x1C80D0u;
    // 0x1c80d0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c80d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c80d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80d8: 0xdc50bbd8  ld          $s0, -0x4428($v0)
    ctx->pc = 0x1c80d8u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25BBD8u));
    // 0x1c80dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C80DCu;
    {
        const bool branch_taken_0x1c80dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80dc) {
            ctx->pc = 0x1C80F0u;
            goto label_1c80f0;
        }
    }
    ctx->pc = 0x1C80E4u;
    // 0x1c80e4: 0x0  nop
    ctx->pc = 0x1c80e4u;
    // NOP
label_1c80e8:
    // 0x1c80e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c80e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80ec: 0xdc50bbd0  ld          $s0, -0x4430($v0)
    ctx->pc = 0x1c80ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294949840)));
label_1c80f0:
    // 0x1c80f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80f4: 0xc07205c  jal         func_1C8170
    ctx->pc = 0x1C80F4u;
    SET_GPR_U32(ctx, 31, 0x1C80FCu);
    ctx->pc = 0x1C8170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8170u, 0x1C80F4u, 0x1C80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80FCu;
label_1c80fc:
    // 0x1c80fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c80fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8104: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C8104u;
    SET_GPR_U32(ctx, 31, 0x1C810Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C8104u, 0x1C810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C810Cu;
label_1c810c:
    // 0x1c810c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C810Cu;
    {
        const bool branch_taken_0x1c810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C810Cu;
        // 0x1c8110: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c810c) {
            ctx->pc = 0x1C815Cu;
            goto label_1c815c;
        }
    }
    ctx->pc = 0x1C8114u;
    // 0x1c8114: 0x0  nop
    ctx->pc = 0x1c8114u;
    // NOP
label_1c8118:
    // 0x1c8118: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c8118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c811c: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1c811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1c8120: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8124: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x1c8124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x1c8128: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1c8128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1c812c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8130: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8134: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c8134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c8138: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c8138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c813c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8140: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c8140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c8144: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c8144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8148: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x1c8148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x1c814c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c814cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c8150: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C8150u;
    SET_GPR_U32(ctx, 31, 0x1C8158u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C8150u, 0x1C8158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8158u;
label_1c8158:
    // 0x1c8158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c815c:
    // 0x1c815c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c815cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8164: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8164u;
        // 0x1c8168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C816Cu;
}
