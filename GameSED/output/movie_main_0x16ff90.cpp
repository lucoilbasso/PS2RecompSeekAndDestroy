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

// Function: movie_main
// Address: 0x16ff90 - 0x1700d4
void movie_main_0x16ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movie_main_0x16ff90");
#endif

    switch (ctx->pc) {
        case 0x16ffe8u: goto label_16ffe8;
        case 0x16fff4u: goto label_16fff4;
        case 0x17003cu: goto label_17003c;
        case 0x170040u: goto label_170040;
        case 0x170074u: goto label_170074;
        case 0x170084u: goto label_170084;
        case 0x170088u: goto label_170088;
        case 0x170090u: goto label_170090;
        case 0x1700a0u: goto label_1700a0;
        case 0x1700a8u: goto label_1700a8;
        default: break;
    }

    ctx->pc = 0x16ff90u;

    // 0x16ff90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ff94: 0xaf8691a4  sw          $a2, -0x6E5C($gp)
    ctx->pc = 0x16ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939044), GPR_U32(ctx, 6));
    // 0x16ff98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ff9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16ff9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ffa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16ffa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16ffa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16ffac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16ffacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16ffb4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x16ffb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ffbc: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x16ffbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16ffc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16ffc4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16ffc8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16ffcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ffd0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16FFD0u;
    {
        const bool branch_taken_0x16ffd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFD0u;
        // 0x16ffd4: 0xaf828be0  sw          $v0, -0x7420($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffd0) {
            ctx->pc = 0x170024u;
            goto label_170024;
        }
    }
    ctx->pc = 0x16FFD8u;
    // 0x16ffd8: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x16ffdc: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x16ffdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16ffe0: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x16ffe0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x16ffe4: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x16ffe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_16ffe8:
    // 0x16ffe8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ffec: 0xc074266  jal         func_1D0998
    ctx->pc = 0x16FFECu;
    SET_GPR_U32(ctx, 31, 0x16FFF4u);
    ctx->pc = 0x16FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFECu;
    // 0x16fff0: 0x26a57668  addiu       $a1, $s5, 0x7668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 30312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x16FFECu, 0x16FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FFF4u;
label_16fff4:
    // 0x16fff4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FFF4u;
    {
        const bool branch_taken_0x16fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fff4) {
            ctx->pc = 0x16FFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FFF4u;
            // 0x16fff8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170008u;
            goto label_170008;
        }
    }
    ctx->pc = 0x16FFFCu;
    // 0x16fffc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FFFCu;
    {
        const bool branch_taken_0x16fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFFCu;
        // 0x170000: 0xaf808bd8  sw          $zero, -0x7428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fffc) {
            ctx->pc = 0x170018u;
            goto label_170018;
        }
    }
    ctx->pc = 0x170004u;
    // 0x170004: 0x0  nop
    ctx->pc = 0x170004u;
    // NOP
label_170008:
    // 0x170008: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17000c: 0x54540002  bnel        $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x17000Cu;
    {
        const bool branch_taken_0x17000c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x17000c) {
            ctx->pc = 0x170010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17000Cu;
            // 0x170010: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170018u;
            goto label_170018;
        }
    }
    ctx->pc = 0x170014u;
    // 0x170014: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x170014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170018:
    // 0x170018: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x170018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17001c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17001Cu;
    {
        const bool branch_taken_0x17001c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x170020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17001Cu;
        // 0x170020: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17001c) {
            ctx->pc = 0x16FFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ffe8;
        }
    }
    ctx->pc = 0x170024u;
label_170024:
    // 0x170024: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x170024u;
    {
        const bool branch_taken_0x170024 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x170024) {
            ctx->pc = 0x170034u;
            goto label_170034;
        }
    }
    ctx->pc = 0x17002Cu;
    // 0x17002c: 0x5660000c  bnel        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x17002Cu;
    {
        const bool branch_taken_0x17002c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x17002c) {
            ctx->pc = 0x170030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17002Cu;
            // 0x170030: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170060u;
            goto label_170060;
        }
    }
    ctx->pc = 0x170034u;
label_170034:
    // 0x170034: 0xc05c24e  jal         func_170938
    ctx->pc = 0x170034u;
    SET_GPR_U32(ctx, 31, 0x17003Cu);
    ctx->pc = 0x170938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170938u, 0x170034u, 0x17003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17003Cu;
label_17003c:
    // 0x17003c: 0x0  nop
    ctx->pc = 0x17003cu;
    // NOP
label_170040:
    // 0x170040: 0x0  nop
    ctx->pc = 0x170040u;
    // NOP
    // 0x170044: 0x0  nop
    ctx->pc = 0x170044u;
    // NOP
    // 0x170048: 0x0  nop
    ctx->pc = 0x170048u;
    // NOP
    // 0x17004c: 0x0  nop
    ctx->pc = 0x17004cu;
    // NOP
    // 0x170050: 0x0  nop
    ctx->pc = 0x170050u;
    // NOP
    // 0x170054: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x170054u;
    {
        const bool branch_taken_0x170054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170054) {
            ctx->pc = 0x170040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170040;
        }
    }
    ctx->pc = 0x17005Cu;
    // 0x17005c: 0x0  nop
    ctx->pc = 0x17005cu;
    // NOP
label_170060:
    // 0x170060: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x170060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x170064: 0x263012d0  addiu       $s0, $s1, 0x12D0
    ctx->pc = 0x170064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    // 0x170068: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x17006c: 0xc05cfb6  jal         func_173ED8
    ctx->pc = 0x17006Cu;
    SET_GPR_U32(ctx, 31, 0x170074u);
    ctx->pc = 0x170070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17006Cu;
    // 0x170070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173ED8u, 0x17006Cu, 0x170074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170074u;
label_170074:
    // 0x170074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170078: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x17007c: 0xc05d056  jal         func_174158
    ctx->pc = 0x17007Cu;
    SET_GPR_U32(ctx, 31, 0x170084u);
    ctx->pc = 0x170080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17007Cu;
    // 0x170080: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174158u, 0x17007Cu, 0x170084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170084u;
label_170084:
    // 0x170084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170088:
    // 0x170088: 0xc05c036  jal         func_1700D8
    ctx->pc = 0x170088u;
    SET_GPR_U32(ctx, 31, 0x170090u);
    ctx->pc = 0x17008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170088u;
    // 0x17008c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1700D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1700D8u, 0x170088u, 0x170090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170090u;
label_170090:
    // 0x170090: 0x5450fffd  bnel        $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x170090u;
    {
        const bool branch_taken_0x170090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x170090) {
            ctx->pc = 0x170094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170090u;
            // 0x170094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170088;
        }
    }
    ctx->pc = 0x170098u;
    // 0x170098: 0xc05d042  jal         func_174108
    ctx->pc = 0x170098u;
    SET_GPR_U32(ctx, 31, 0x1700A0u);
    ctx->pc = 0x17009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170098u;
    // 0x17009c: 0x262412d0  addiu       $a0, $s1, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174108u, 0x170098u, 0x1700A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700A0u;
label_1700a0:
    // 0x1700a0: 0xc05c258  jal         func_170960
    ctx->pc = 0x1700A0u;
    SET_GPR_U32(ctx, 31, 0x1700A8u);
    ctx->pc = 0x170960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170960u, 0x1700A0u, 0x1700A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700A8u;
label_1700a8:
    // 0x1700a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1700a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1700ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1700b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1700b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1700b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1700b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1700b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1700bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1700bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1700c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1700c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1700c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1700c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1700c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1700c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1700cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1700CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700CCu;
        // 0x1700d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1700CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1700D4u;
}
