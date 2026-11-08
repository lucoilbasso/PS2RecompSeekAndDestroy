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

// Function: _dtoa_r
// Address: 0x1d2fc8 - 0x1d422c
void _dtoa_r_0x1d2fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dtoa_r_0x1d2fc8");
#endif

    switch (ctx->pc) {
        case 0x1d3038u: goto label_1d3038;
        case 0x1d30f8u: goto label_1d30f8;
        case 0x1d3140u: goto label_1d3140;
        case 0x1d31f4u: goto label_1d31f4;
        case 0x1d3210u: goto label_1d3210;
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d32acu: goto label_1d32ac;
        case 0x1d32bcu: goto label_1d32bc;
        case 0x1d32ccu: goto label_1d32cc;
        case 0x1d32dcu: goto label_1d32dc;
        case 0x1d32ecu: goto label_1d32ec;
        case 0x1d3320u: goto label_1d3320;
        case 0x1d3460u: goto label_1d3460;
        case 0x1d3480u: goto label_1d3480;
        case 0x1d348cu: goto label_1d348c;
        case 0x1d34fcu: goto label_1d34fc;
        case 0x1d3510u: goto label_1d3510;
        case 0x1d352cu: goto label_1d352c;
        case 0x1d354cu: goto label_1d354c;
        case 0x1d3580u: goto label_1d3580;
        case 0x1d3590u: goto label_1d3590;
        case 0x1d35acu: goto label_1d35ac;
        case 0x1d35dcu: goto label_1d35dc;
        case 0x1d3614u: goto label_1d3614;
        case 0x1d3620u: goto label_1d3620;
        case 0x1d3630u: goto label_1d3630;
        case 0x1d3644u: goto label_1d3644;
        case 0x1d368cu: goto label_1d368c;
        case 0x1d36a0u: goto label_1d36a0;
        case 0x1d36b8u: goto label_1d36b8;
        case 0x1d36c8u: goto label_1d36c8;
        case 0x1d3700u: goto label_1d3700;
        case 0x1d3710u: goto label_1d3710;
        case 0x1d3718u: goto label_1d3718;
        case 0x1d372cu: goto label_1d372c;
        case 0x1d3740u: goto label_1d3740;
        case 0x1d3750u: goto label_1d3750;
        case 0x1d375cu: goto label_1d375c;
        case 0x1d376cu: goto label_1d376c;
        case 0x1d3788u: goto label_1d3788;
        case 0x1d37a4u: goto label_1d37a4;
        case 0x1d37b4u: goto label_1d37b4;
        case 0x1d37f4u: goto label_1d37f4;
        case 0x1d37f8u: goto label_1d37f8;
        case 0x1d3804u: goto label_1d3804;
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3820u: goto label_1d3820;
        case 0x1d384cu: goto label_1d384c;
        case 0x1d385cu: goto label_1d385c;
        case 0x1d3878u: goto label_1d3878;
        case 0x1d3888u: goto label_1d3888;
        case 0x1d3898u: goto label_1d3898;
        case 0x1d38d4u: goto label_1d38d4;
        case 0x1d394cu: goto label_1d394c;
        case 0x1d395cu: goto label_1d395c;
        case 0x1d3970u: goto label_1d3970;
        case 0x1d3980u: goto label_1d3980;
        case 0x1d398cu: goto label_1d398c;
        case 0x1d3998u: goto label_1d3998;
        case 0x1d39a8u: goto label_1d39a8;
        case 0x1d39b8u: goto label_1d39b8;
        case 0x1d39dcu: goto label_1d39dc;
        case 0x1d39f0u: goto label_1d39f0;
        case 0x1d3a08u: goto label_1d3a08;
        case 0x1d3a28u: goto label_1d3a28;
        case 0x1d3a78u: goto label_1d3a78;
        case 0x1d3a8cu: goto label_1d3a8c;
        case 0x1d3b4cu: goto label_1d3b4c;
        case 0x1d3bc0u: goto label_1d3bc0;
        case 0x1d3bd4u: goto label_1d3bd4;
        case 0x1d3be4u: goto label_1d3be4;
        case 0x1d3c08u: goto label_1d3c08;
        case 0x1d3c1cu: goto label_1d3c1c;
        case 0x1d3c2cu: goto label_1d3c2c;
        case 0x1d3c48u: goto label_1d3c48;
        case 0x1d3cb4u: goto label_1d3cb4;
        case 0x1d3d4cu: goto label_1d3d4c;
        case 0x1d3d6cu: goto label_1d3d6c;
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3da0u: goto label_1d3da0;
        case 0x1d3dc4u: goto label_1d3dc4;
        case 0x1d3e08u: goto label_1d3e08;
        case 0x1d3e18u: goto label_1d3e18;
        case 0x1d3e68u: goto label_1d3e68;
        case 0x1d3e84u: goto label_1d3e84;
        case 0x1d3ea4u: goto label_1d3ea4;
        case 0x1d3eb4u: goto label_1d3eb4;
        case 0x1d3ed0u: goto label_1d3ed0;
        case 0x1d3ee4u: goto label_1d3ee4;
        case 0x1d3f0cu: goto label_1d3f0c;
        case 0x1d3f28u: goto label_1d3f28;
        case 0x1d3f40u: goto label_1d3f40;
        case 0x1d3f54u: goto label_1d3f54;
        case 0x1d3f64u: goto label_1d3f64;
        case 0x1d3f78u: goto label_1d3f78;
        case 0x1d3f94u: goto label_1d3f94;
        case 0x1d3fa4u: goto label_1d3fa4;
        case 0x1d4008u: goto label_1d4008;
        case 0x1d4018u: goto label_1d4018;
        case 0x1d4098u: goto label_1d4098;
        case 0x1d40acu: goto label_1d40ac;
        case 0x1d40c0u: goto label_1d40c0;
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40f8u: goto label_1d40f8;
        case 0x1d4128u: goto label_1d4128;
        case 0x1d4174u: goto label_1d4174;
        case 0x1d41a0u: goto label_1d41a0;
        case 0x1d41c4u: goto label_1d41c4;
        case 0x1d41d0u: goto label_1d41d0;
        case 0x1d41dcu: goto label_1d41dc;
        default: break;
    }

    ctx->pc = 0x1d2fc8u;

    // 0x1d2fc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d2fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d2fcc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1d2fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1d2fd0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1d2fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fd4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1d2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1d2fd8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d2fd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fdc: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1d2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1d2fe0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1d2fe0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fe4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1d2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1d2fe8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1d2fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1d2fec: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1d2fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1d2ff0: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1d2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1d2ff4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1d2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1d2ff8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1d2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1d2ffc: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1d2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1d3000: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1d3000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1d3004: 0x8eeb0040  lw          $t3, 0x40($s7)
    ctx->pc = 0x1d3004u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x1d3008: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1d3008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1d300c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1d300cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1d3010: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3010u;
    {
        const bool branch_taken_0x1d3010 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3010u;
        // 0x1d3014: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3010) {
            ctx->pc = 0x1D303Cu;
            goto label_1d303c;
        }
    }
    ctx->pc = 0x1D3018u;
    // 0x1d3018: 0x8ee60044  lw          $a2, 0x44($s7)
    ctx->pc = 0x1d3018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x1d301c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3020: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1d3020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3024: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x1d3024u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x1d3028: 0x8ee20044  lw          $v0, 0x44($s7)
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x1d302c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1d302cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3030: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D3030u;
    SET_GPR_U32(ctx, 31, 0x1D3038u);
    ctx->pc = 0x1D3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3030u;
    // 0x1d3034: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D3030u, 0x1D3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3038u;
label_1d3038:
    // 0x1d3038: 0xaee00040  sw          $zero, 0x40($s7)
    ctx->pc = 0x1d3038u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
label_1d303c:
    // 0x1d303c: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x1d303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x1d3040: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d3040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3044: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d3044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d3048: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3048u;
    {
        const bool branch_taken_0x1d3048 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d3048) {
            ctx->pc = 0x1D304Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3048u;
            // 0x1d304c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D307Cu;
            goto label_1d307c;
        }
    }
    ctx->pc = 0x1D3050u;
    // 0x1d3050: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1d3054: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d3054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3058: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d3058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d305c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d3060: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x1d3060u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x1d3064: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d3068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d306c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3070: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d3070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d3074: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1d3074u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1d3078: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x1d3078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_1d307c:
    // 0x1d307c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1d307cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3080: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1d3080u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1d3084: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1d3084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1d3088: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x1d3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1d308c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D308Cu;
    {
        const bool branch_taken_0x1d308c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D308Cu;
        // 0x1d3090: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d308c) {
            ctx->pc = 0x1D30E8u;
            goto label_1d30e8;
        }
    }
    ctx->pc = 0x1D3094u;
    // 0x1d3094: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d3094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3098: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1d3098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1d309c: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1d30a0: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1d30a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1d30a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D30A4u;
    {
        const bool branch_taken_0x1d30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30A4u;
        // 0x1d30a8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30a4) {
            ctx->pc = 0x1D30B8u;
            goto label_1d30b8;
        }
    }
    ctx->pc = 0x1D30ACu;
    // 0x1d30ac: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d30acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d30b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D30B0u;
    {
        const bool branch_taken_0x1d30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30B0u;
        // 0x1d30b4: 0x2455c5d0  addiu       $s5, $v0, -0x3A30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30b0) {
            ctx->pc = 0x1D30C0u;
            goto label_1d30c0;
        }
    }
    ctx->pc = 0x1D30B8u;
label_1d30b8:
    // 0x1d30b8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d30bc: 0x2455c5e0  addiu       $s5, $v0, -0x3A20
    ctx->pc = 0x1d30bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
label_1d30c0:
    // 0x1d30c0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d30c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D30C4u;
    {
        const bool branch_taken_0x1d30c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30C4u;
        // 0x1d30c8: 0x26a30008  addiu       $v1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30c4) {
            ctx->pc = 0x1D3128u;
            goto label_1d3128;
        }
    }
    ctx->pc = 0x1D30CCu;
    // 0x1d30cc: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x1d30ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1d30d0: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x1d30d4: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1d30d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1d30d8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1d30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d30dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D30DCu;
    {
        const bool branch_taken_0x1d30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30DCu;
        // 0x1d30e0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30dc) {
            ctx->pc = 0x1D3128u;
            goto label_1d3128;
        }
    }
    ctx->pc = 0x1D30E4u;
    // 0x1d30e4: 0x0  nop
    ctx->pc = 0x1d30e4u;
    // NOP
label_1d30e8:
    // 0x1d30e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d30e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d30ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30f0: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D30F0u;
    SET_GPR_U32(ctx, 31, 0x1D30F8u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D30F0u, 0x1D30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D30F8u;
label_1d30f8:
    // 0x1d30f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D30F8u;
    {
        const bool branch_taken_0x1d30f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30F8u;
        // 0x1d30fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30f8) {
            ctx->pc = 0x1D3130u;
            goto label_1d3130;
        }
    }
    ctx->pc = 0x1D3100u;
    // 0x1d3100: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3108: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1d3108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1d310c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d310cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d3110: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d3114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3114u;
    {
        const bool branch_taken_0x1d3114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3114u;
        // 0x1d3118: 0x2475c5e8  addiu       $s5, $v1, -0x3A18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3114) {
            ctx->pc = 0x1D3128u;
            goto label_1d3128;
        }
    }
    ctx->pc = 0x1D311Cu;
    // 0x1d311c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d3120: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1d3120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d3124: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d3124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1d3128:
    // 0x1d3128: 0x10000434  b           . + 4 + (0x434 << 2)
    ctx->pc = 0x1D3128u;
    {
        const bool branch_taken_0x1d3128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3128u;
        // 0x1d312c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3128) {
            ctx->pc = 0x1D41FCu;
            goto label_1d41fc;
        }
    }
    ctx->pc = 0x1D3130u;
label_1d3130:
    // 0x1d3130: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3138: 0xc07581c  jal         func_1D6070
    ctx->pc = 0x1D3138u;
    SET_GPR_U32(ctx, 31, 0x1D3140u);
    ctx->pc = 0x1D313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3138u;
    // 0x1d313c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6070u, 0x1D3138u, 0x1D3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3140u;
label_1d3140:
    // 0x1d3140: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1d3144: 0x101502  srl         $v0, $s0, 20
    ctx->pc = 0x1d3144u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x1d3148: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x1d3148u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1d314c: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D314Cu;
    {
        const bool branch_taken_0x1d314c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D314Cu;
        // 0x1d3150: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d314c) {
            ctx->pc = 0x1D31A0u;
            goto label_1d31a0;
        }
    }
    ctx->pc = 0x1D3154u;
    // 0x1d3154: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1d3154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3158: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x1d3158u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d315c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d3160: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d3160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d3164: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1d3164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3168: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1d3168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1d316c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d316cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3170: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x1d3170u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x1d3174: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x1d3174u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x1d3178: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x1d3178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x1d317c: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x1d317cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d3180: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x1d3180u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x1d3184: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d3184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d3188: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x1d3188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x1d318c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3190: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1d3190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1d3194: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x1d3194u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x1d3198: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3198u;
    {
        const bool branch_taken_0x1d3198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3198u;
        // 0x1d319c: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3198) {
            ctx->pc = 0x1D3240u;
            goto label_1d3240;
        }
    }
    ctx->pc = 0x1D31A0u;
label_1d31a0:
    // 0x1d31a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d31a4: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1d31a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d31a8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d31a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d31ac: 0x24930432  addiu       $s3, $a0, 0x432
    ctx->pc = 0x1d31acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x1d31b0: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x1d31b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1d31b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D31B4u;
    {
        const bool branch_taken_0x1d31b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31B4u;
        // 0x1d31b8: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31b4) {
            ctx->pc = 0x1D31E0u;
            goto label_1d31e0;
        }
    }
    ctx->pc = 0x1D31BCu;
    // 0x1d31bc: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x1d31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x1d31c0: 0x131823  negu        $v1, $s3
    ctx->pc = 0x1d31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1d31c4: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1d31c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1d31c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d31c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d31cc: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x1d31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d31d0: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1d31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d31d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D31D4u;
    {
        const bool branch_taken_0x1d31d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31D4u;
        // 0x1d31d8: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31d4) {
            ctx->pc = 0x1D31ECu;
            goto label_1d31ec;
        }
    }
    ctx->pc = 0x1D31DCu;
    // 0x1d31dc: 0x0  nop
    ctx->pc = 0x1d31dcu;
    // NOP
label_1d31e0:
    // 0x1d31e0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1d31e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1d31e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d31e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d31e8: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1d31e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1d31ec:
    // 0x1d31ec: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D31ECu;
    SET_GPR_U32(ctx, 31, 0x1D31F4u);
    ctx->pc = 0x1D31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31ECu;
    // 0x1d31f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D31ECu, 0x1D31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D31F4u;
label_1d31f4:
    // 0x1d31f4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D31F4u;
    {
        const bool branch_taken_0x1d31f4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d31f4) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D31FCu;
    // 0x1d31fc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1d31fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1d3200: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d3200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d3204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3208: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D3208u;
    SET_GPR_U32(ctx, 31, 0x1D3210u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D3208u, 0x1D3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3210u;
label_1d3210:
    // 0x1d3210: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3214: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x1d3214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x1d3218: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x1d3218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d321c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1d321cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3220: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d3220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d3224: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x1d3224u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x1d3228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d322c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3230: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1d3230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1d3234: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3238: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x1d323c: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x1d323cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_1d3240:
    // 0x1d3240: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x1d3240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x1d3244: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1d3244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1d3248: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d3248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d324c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D324Cu;
    SET_GPR_U32(ctx, 31, 0x1D3254u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D324Cu, 0x1D3254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3254u;
label_1d3254:
    // 0x1d3254: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1d3254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1d3258: 0xdc25c5f0  ld          $a1, -0x3A10($at)
    ctx->pc = 0x1d3258u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25C5F0u));
    // 0x1d325c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3260: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3260u;
    SET_GPR_U32(ctx, 31, 0x1D3268u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3260u, 0x1D3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3268u;
label_1d3268:
    // 0x1d3268: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1d326c: 0xdc25c5f8  ld          $a1, -0x3A08($at)
    ctx->pc = 0x1d326cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25C5F8u));
    // 0x1d3270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3274: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D3274u;
    SET_GPR_U32(ctx, 31, 0x1D327Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D3274u, 0x1D327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D327Cu;
label_1d327c:
    // 0x1d327c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3280: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3280u;
    SET_GPR_U32(ctx, 31, 0x1D3288u);
    ctx->pc = 0x1D3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3280u;
    // 0x1d3284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3280u, 0x1D3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3288u;
label_1d3288:
    // 0x1d3288: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1d3288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1d328c: 0xdc25c600  ld          $a1, -0x3A00($at)
    ctx->pc = 0x1d328cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25C600u));
    // 0x1d3290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3294: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3294u;
    SET_GPR_U32(ctx, 31, 0x1D329Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3294u, 0x1D329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D329Cu;
label_1d329c:
    // 0x1d329c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d32a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32a4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D32A4u;
    SET_GPR_U32(ctx, 31, 0x1D32ACu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D32A4u, 0x1D32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32ACu;
label_1d32ac:
    // 0x1d32ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d32acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d32b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32b4: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D32B4u;
    SET_GPR_U32(ctx, 31, 0x1D32BCu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D32B4u, 0x1D32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32BCu;
label_1d32bc:
    // 0x1d32bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d32bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d32c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32c4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D32C4u;
    SET_GPR_U32(ctx, 31, 0x1D32CCu);
    ctx->pc = 0x1D32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32C4u;
    // 0x1d32c8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D32C4u, 0x1D32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32CCu;
label_1d32cc:
    // 0x1d32cc: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D32CCu;
    {
        const bool branch_taken_0x1d32cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32CCu;
        // 0x1d32d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32cc) {
            ctx->pc = 0x1D32F8u;
            goto label_1d32f8;
        }
    }
    ctx->pc = 0x1D32D4u;
    // 0x1d32d4: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D32D4u;
    SET_GPR_U32(ctx, 31, 0x1D32DCu);
    ctx->pc = 0x1D32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32D4u;
    // 0x1d32d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D32D4u, 0x1D32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32DCu;
label_1d32dc:
    // 0x1d32dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d32e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32e4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D32E4u;
    SET_GPR_U32(ctx, 31, 0x1D32ECu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D32E4u, 0x1D32ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32ECu;
label_1d32ec:
    // 0x1d32ec: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d32f0: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x1d32f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x1d32f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d32f8:
    // 0x1d32f8: 0x2fc20017  sltiu       $v0, $fp, 0x17
    ctx->pc = 0x1d32f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d32fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D32FCu;
    {
        const bool branch_taken_0x1d32fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32FCu;
        // 0x1d3300: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32fc) {
            ctx->pc = 0x1D332Cu;
            goto label_1d332c;
        }
    }
    ctx->pc = 0x1D3304u;
    // 0x1d3304: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x1d3304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1d3308: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d330c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1d3310: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d3314: 0xdca5c680  ld          $a1, -0x3980($a1)
    ctx->pc = 0x1d3314u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294952576)));
    // 0x1d3318: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3318u;
    SET_GPR_U32(ctx, 31, 0x1D3320u);
    ctx->pc = 0x1D331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3318u;
    // 0x1d331c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3318u, 0x1D3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3320u;
label_1d3320:
    // 0x1d3320: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d3324: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1d3324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d3328: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x1d3328u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_1d332c:
    // 0x1d332c: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x1d332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1d3330: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d3330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d3334: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3334u;
    {
        const bool branch_taken_0x1d3334 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1d3334) {
            ctx->pc = 0x1D3338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3334u;
            // 0x1d3338: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D333Cu;
    // 0x1d333c: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1d333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x1d3340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3340u;
    {
        const bool branch_taken_0x1d3340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3340u;
        // 0x1d3344: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3340) {
            ctx->pc = 0x1D3350u;
            goto label_1d3350;
        }
    }
    ctx->pc = 0x1D3348u;
label_1d3348:
    // 0x1d3348: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d3348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1d334c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1d334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_1d3350:
    // 0x1d3350: 0x7c00007  bltz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3350u;
    {
        const bool branch_taken_0x1d3350 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1D3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3350u;
        // 0x1d3354: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3350) {
            ctx->pc = 0x1D3370u;
            goto label_1d3370;
        }
    }
    ctx->pc = 0x1D3358u;
    // 0x1d3358: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1d3358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1d335c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x1d335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1d3360: 0xafbe003c  sw          $fp, 0x3C($sp)
    ctx->pc = 0x1d3360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 30));
    // 0x1d3364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3364u;
    {
        const bool branch_taken_0x1d3364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3364u;
        // 0x1d3368: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3364) {
            ctx->pc = 0x1D3388u;
            goto label_1d3388;
        }
    }
    ctx->pc = 0x1D336Cu;
    // 0x1d336c: 0x0  nop
    ctx->pc = 0x1d336cu;
    // NOP
label_1d3370:
    // 0x1d3370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d3370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3374: 0x1e1823  negu        $v1, $fp
    ctx->pc = 0x1d3374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x1d3378: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x1d3378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x1d337c: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1d3380: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1d3380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1d3384: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d3384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1d3388:
    // 0x1d3388: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1d3388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d338c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d338cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3390: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1d3390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d3394: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x1d3394u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1d3398: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1d3398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d339c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D339Cu;
    {
        const bool branch_taken_0x1d339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D339Cu;
        // 0x1d33a0: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d339c) {
            ctx->pc = 0x1D33B0u;
            goto label_1d33b0;
        }
    }
    ctx->pc = 0x1D33A4u;
    // 0x1d33a4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d33a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d33a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33ac: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1d33acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_1d33b0:
    // 0x1d33b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1d33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d33b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d33b8: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x1d33b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x1d33bc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1d33bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d33c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d33c4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1d33c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1d33c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D33C8u;
    {
        const bool branch_taken_0x1d33c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33C8u;
        // 0x1d33cc: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33c8) {
            ctx->pc = 0x1D344Cu;
            goto label_1d344c;
        }
    }
    ctx->pc = 0x1D33D0u;
    // 0x1d33d0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d33d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d33d8: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1d33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1d33dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d33e0: 0x8c63c610  lw          $v1, -0x39F0($v1)
    ctx->pc = 0x1d33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952464)));
    // 0x1d33e4: 0x600008  jr          $v1
    ctx->pc = 0x1D33E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D33F0u: goto label_1d33f0;
            case 0x1D3400u: goto label_1d3400;
            case 0x1D3404u: goto label_1d3404;
            case 0x1D3428u: goto label_1d3428;
            case 0x1D342Cu: goto label_1d342c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D33E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D33ECu;
    // 0x1d33ec: 0x0  nop
    ctx->pc = 0x1d33ecu;
    // NOP
label_1d33f0:
    // 0x1d33f0: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x1d33f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d33f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D33F4u;
    {
        const bool branch_taken_0x1d33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F4u;
        // 0x1d33f8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33f4) {
            ctx->pc = 0x1D344Cu;
            goto label_1d344c;
        }
    }
    ctx->pc = 0x1D33FCu;
    // 0x1d33fc: 0x0  nop
    ctx->pc = 0x1d33fcu;
    // NOP
label_1d3400:
    // 0x1d3400: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1d3400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1d3404:
    // 0x1d3404: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1d3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d3408: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d340c: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x1d340cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d3410: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1d3410u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1d3414: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1d3414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1d3418: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x1d3418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x1d341c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D341Cu;
    {
        const bool branch_taken_0x1d341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D341Cu;
        // 0x1d3420: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d341c) {
            ctx->pc = 0x1D344Cu;
            goto label_1d344c;
        }
    }
    ctx->pc = 0x1D3424u;
    // 0x1d3424: 0x0  nop
    ctx->pc = 0x1d3424u;
    // NOP
label_1d3428:
    // 0x1d3428: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1d3428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1d342c:
    // 0x1d342c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1d342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d3430: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x1d3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1d3434: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3438: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x1d3438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d343c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1d343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1d3440: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x1d3440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d3444: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x1d3444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x1d3448: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x1d3448u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_1d344c:
    // 0x1d344c: 0x2e620018  sltiu       $v0, $s3, 0x18
    ctx->pc = 0x1d344cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d3450: 0xaee00044  sw          $zero, 0x44($s7)
    ctx->pc = 0x1d3450u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 0));
    // 0x1d3454: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3454u;
    {
        const bool branch_taken_0x1d3454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3454u;
        // 0x1d3458: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3454) {
            ctx->pc = 0x1D3480u;
            goto label_1d3480;
        }
    }
    ctx->pc = 0x1D345Cu;
    // 0x1d345c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d345cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3460:
    // 0x1d3460: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1d3460u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d3464: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1d3464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1d3468: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1d3468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d346c: 0x0  nop
    ctx->pc = 0x1d346cu;
    // NOP
    // 0x1d3470: 0x0  nop
    ctx->pc = 0x1d3470u;
    // NOP
    // 0x1d3474: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3474u;
    {
        const bool branch_taken_0x1d3474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3474u;
        // 0x1d3478: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3474) {
            ctx->pc = 0x1D3460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3460;
        }
    }
    ctx->pc = 0x1D347Cu;
    // 0x1d347c: 0xaee30044  sw          $v1, 0x44($s7)
    ctx->pc = 0x1d347cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
label_1d3480:
    // 0x1d3480: 0x8ee50044  lw          $a1, 0x44($s7)
    ctx->pc = 0x1d3480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x1d3484: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D3484u;
    SET_GPR_U32(ctx, 31, 0x1D348Cu);
    ctx->pc = 0x1D3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3484u;
    // 0x1d3488: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D3484u, 0x1D348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D348Cu;
label_1d348c:
    // 0x1d348c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1d348cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1d3490: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d3490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3494: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d3494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d3498: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1d3498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1d349c: 0xaee40040  sw          $a0, 0x40($s7)
    ctx->pc = 0x1d349cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
    // 0x1d34a0: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x1D34A0u;
    {
        const bool branch_taken_0x1d34a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34A0u;
        // 0x1d34a4: 0x8fb50054  lw          $s5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34a0) {
            ctx->pc = 0x1D38F0u;
            goto label_1d38f0;
        }
    }
    ctx->pc = 0x1D34A8u;
    // 0x1d34a8: 0x52200112  beql        $s1, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x1D34A8u;
    {
        const bool branch_taken_0x1d34a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d34a8) {
            ctx->pc = 0x1D34ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D34A8u;
            // 0x1d34ac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D38F4u;
            goto label_1d38f4;
        }
    }
    ctx->pc = 0x1D34B0u;
    // 0x1d34b0: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1d34b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34b4: 0xafbe002c  sw          $fp, 0x2C($sp)
    ctx->pc = 0x1d34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 30));
    // 0x1d34b8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1d34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1d34bc: 0x1bc00026  blez        $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D34BCu;
    {
        const bool branch_taken_0x1d34bc = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1D34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34BCu;
        // 0x1d34c0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34bc) {
            ctx->pc = 0x1D3558u;
            goto label_1d3558;
        }
    }
    ctx->pc = 0x1D34C4u;
    // 0x1d34c4: 0x33c2000f  andi        $v0, $fp, 0xF
    ctx->pc = 0x1d34c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
    // 0x1d34c8: 0x1e8103  sra         $s0, $fp, 4
    ctx->pc = 0x1d34c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 4));
    // 0x1d34cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d34d0: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x1d34d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x1d34d4: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x1d34d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x1d34d8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d34d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d34dc: 0xde31c680  ld          $s1, -0x3980($s1)
    ctx->pc = 0x1d34dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294952576)));
    // 0x1d34e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D34E0u;
    {
        const bool branch_taken_0x1d34e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34E0u;
        // 0x1d34e4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34e0) {
            ctx->pc = 0x1D3500u;
            goto label_1d3500;
        }
    }
    ctx->pc = 0x1D34E8u;
    // 0x1d34e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34ec: 0xdc45c768  ld          $a1, -0x3898($v0)
    ctx->pc = 0x1d34ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294952808)));
    // 0x1d34f0: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x1d34f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1d34f4: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D34F4u;
    SET_GPR_U32(ctx, 31, 0x1D34FCu);
    ctx->pc = 0x1D34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34F4u;
    // 0x1d34f8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D34F4u, 0x1D34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34FCu;
label_1d34fc:
    // 0x1d34fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d34fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3500:
    // 0x1d3500: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3500u;
    {
        const bool branch_taken_0x1d3500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3500u;
        // 0x1d3504: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3500) {
            ctx->pc = 0x1D353Cu;
            goto label_1d353c;
        }
    }
    ctx->pc = 0x1D3508u;
    // 0x1d3508: 0x2452c748  addiu       $s2, $v0, -0x38B8
    ctx->pc = 0x1d3508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952776));
    // 0x1d350c: 0x0  nop
    ctx->pc = 0x1d350cu;
    // NOP
label_1d3510:
    // 0x1d3510: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1d3510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d3514: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3514u;
    {
        const bool branch_taken_0x1d3514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3514) {
            ctx->pc = 0x1D3518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3514u;
            // 0x1d3518: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3534u;
            goto label_1d3534;
        }
    }
    ctx->pc = 0x1D351Cu;
    // 0x1d351c: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x1d351cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d3520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3524: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3524u;
    SET_GPR_U32(ctx, 31, 0x1D352Cu);
    ctx->pc = 0x1D3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3524u;
    // 0x1d3528: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3524u, 0x1D352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D352Cu;
label_1d352c:
    // 0x1d352c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d352cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3530: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1d3530u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_1d3534:
    // 0x1d3534: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D3534u;
    {
        const bool branch_taken_0x1d3534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3534u;
        // 0x1d3538: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3534) {
            ctx->pc = 0x1D3510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3510;
        }
    }
    ctx->pc = 0x1D353Cu;
label_1d353c:
    // 0x1d353c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3544: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D3544u;
    SET_GPR_U32(ctx, 31, 0x1D354Cu);
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D3544u, 0x1D354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D354Cu;
label_1d354c:
    // 0x1d354c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D354Cu;
    {
        const bool branch_taken_0x1d354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D354Cu;
        // 0x1d3550: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d354c) {
            ctx->pc = 0x1D35BCu;
            goto label_1d35bc;
        }
    }
    ctx->pc = 0x1D3554u;
    // 0x1d3554: 0x0  nop
    ctx->pc = 0x1d3554u;
    // NOP
label_1d3558:
    // 0x1d3558: 0x1e8823  negu        $s1, $fp
    ctx->pc = 0x1d3558u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x1d355c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D355Cu;
    {
        const bool branch_taken_0x1d355c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D355Cu;
        // 0x1d3560: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d355c) {
            ctx->pc = 0x1D35BCu;
            goto label_1d35bc;
        }
    }
    ctx->pc = 0x1D3564u;
    // 0x1d3564: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3568: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d356c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1d356cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1d3570: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d3570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3574: 0xdc84c680  ld          $a0, -0x3980($a0)
    ctx->pc = 0x1d3574u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294952576)));
    // 0x1d3578: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3578u;
    SET_GPR_U32(ctx, 31, 0x1D3580u);
    ctx->pc = 0x1D357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3578u;
    // 0x1d357c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3578u, 0x1D3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3580u;
label_1d3580:
    // 0x1d3580: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3580u;
    {
        const bool branch_taken_0x1d3580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3580u;
        // 0x1d3584: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3580) {
            ctx->pc = 0x1D35BCu;
            goto label_1d35bc;
        }
    }
    ctx->pc = 0x1D3588u;
    // 0x1d3588: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d358c: 0x2451c748  addiu       $s1, $v0, -0x38B8
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952776));
label_1d3590:
    // 0x1d3590: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1d3590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d3594: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3594u;
    {
        const bool branch_taken_0x1d3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3594) {
            ctx->pc = 0x1D3598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3594u;
            // 0x1d3598: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D35B4u;
            goto label_1d35b4;
        }
    }
    ctx->pc = 0x1D359Cu;
    // 0x1d359c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1d359cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d35a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d35a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35a4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D35A4u;
    SET_GPR_U32(ctx, 31, 0x1D35ACu);
    ctx->pc = 0x1D35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35A4u;
    // 0x1d35a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D35A4u, 0x1D35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35ACu;
label_1d35ac:
    // 0x1d35ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d35acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35b0: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1d35b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_1d35b4:
    // 0x1d35b4: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D35B4u;
    {
        const bool branch_taken_0x1d35b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35B4u;
        // 0x1d35b8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35b4) {
            ctx->pc = 0x1D3590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3590;
        }
    }
    ctx->pc = 0x1D35BCu;
label_1d35bc:
    // 0x1d35bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35c0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D35C0u;
    {
        const bool branch_taken_0x1d35c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d35c0) {
            ctx->pc = 0x1D3618u;
            goto label_1d3618;
        }
    }
    ctx->pc = 0x1D35C8u;
    // 0x1d35c8: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1d35c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1d35cc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1d35ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1d35d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35d4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D35D4u;
    SET_GPR_U32(ctx, 31, 0x1D35DCu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D35D4u, 0x1D35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35DCu;
label_1d35dc:
    // 0x1d35dc: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D35DCu;
    {
        const bool branch_taken_0x1d35dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35DCu;
        // 0x1d35e0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35dc) {
            ctx->pc = 0x1D3618u;
            goto label_1d3618;
        }
    }
    ctx->pc = 0x1D35E4u;
    // 0x1d35e4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D35E4u;
    {
        const bool branch_taken_0x1d35e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35E4u;
        // 0x1d35e8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35e4) {
            ctx->pc = 0x1D3618u;
            goto label_1d3618;
        }
    }
    ctx->pc = 0x1D35ECu;
    // 0x1d35ec: 0x188000bc  blez        $a0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1D35ECu;
    {
        const bool branch_taken_0x1d35ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35ECu;
        // 0x1d35f0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35ec) {
            ctx->pc = 0x1D38E0u;
            goto label_1d38e0;
        }
    }
    ctx->pc = 0x1D35F4u;
    // 0x1d35f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d35f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d35f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35fc: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d35fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d3600: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d3600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3604: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d3604u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d3608: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d3608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d360c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D360Cu;
    SET_GPR_U32(ctx, 31, 0x1D3614u);
    ctx->pc = 0x1D3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D360Cu;
    // 0x1d3610: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D360Cu, 0x1D3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3614u;
label_1d3614:
    // 0x1d3614: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3618:
    // 0x1d3618: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3618u;
    SET_GPR_U32(ctx, 31, 0x1D3620u);
    ctx->pc = 0x1D361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3618u;
    // 0x1d361c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3618u, 0x1D3620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3620u;
label_1d3620:
    // 0x1d3620: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3628: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3628u;
    SET_GPR_U32(ctx, 31, 0x1D3630u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3628u, 0x1D3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3630u;
label_1d3630:
    // 0x1d3630: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x1d3630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x1d3634: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d3634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d3638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d363c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D363Cu;
    SET_GPR_U32(ctx, 31, 0x1D3644u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D363Cu, 0x1D3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3644u;
label_1d3644:
    // 0x1d3644: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1d3644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3648: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d3648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d364c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d364cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3650: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x1d3650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x1d3654: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x1d3654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1d3658: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x1d3658u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x1d365c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3660: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3664: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x1d3664u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1d3668: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d366c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D366Cu;
    {
        const bool branch_taken_0x1d366c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D366Cu;
        // 0x1d3670: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d366c) {
            ctx->pc = 0x1D36D8u;
            goto label_1d36d8;
        }
    }
    ctx->pc = 0x1D3674u;
    // 0x1d3674: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1d3674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1d3678: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d3678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d367c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3680: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d3680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1d3684: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3684u;
    SET_GPR_U32(ctx, 31, 0x1D368Cu);
    ctx->pc = 0x1D3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3684u;
    // 0x1d3688: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3684u, 0x1D368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D368Cu;
label_1d368c:
    // 0x1d368c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d368cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3690: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3698: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3698u;
    SET_GPR_U32(ctx, 31, 0x1D36A0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3698u, 0x1D36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36A0u;
label_1d36a0:
    // 0x1d36a0: 0x1c4001e3  bgtz        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x1D36A0u;
    {
        const bool branch_taken_0x1d36a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36A0u;
        // 0x1d36a4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36a0) {
            ctx->pc = 0x1D3E30u;
            goto label_1d3e30;
        }
    }
    ctx->pc = 0x1D36A8u;
    // 0x1d36a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d36a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d36acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36b0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D36B0u;
    SET_GPR_U32(ctx, 31, 0x1D36B8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D36B0u, 0x1D36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36B8u;
label_1d36b8:
    // 0x1d36b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d36b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d36bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36c0: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D36C0u;
    SET_GPR_U32(ctx, 31, 0x1D36C8u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D36C0u, 0x1D36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36C8u;
label_1d36c8:
    // 0x1d36c8: 0x44001d5  bltz        $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1D36C8u;
    {
        const bool branch_taken_0x1d36c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36C8u;
        // 0x1d36cc: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36c8) {
            ctx->pc = 0x1D3E20u;
            goto label_1d3e20;
        }
    }
    ctx->pc = 0x1D36D0u;
    // 0x1d36d0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1D36D0u;
    {
        const bool branch_taken_0x1d36d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d36d0) {
            ctx->pc = 0x1D38E0u;
            goto label_1d38e0;
        }
    }
    ctx->pc = 0x1D36D8u;
label_1d36d8:
    // 0x1d36d8: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1D36D8u;
    {
        const bool branch_taken_0x1d36d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36D8u;
        // 0x1d36dc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36d8) {
            ctx->pc = 0x1D37D8u;
            goto label_1d37d8;
        }
    }
    ctx->pc = 0x1D36E0u;
    // 0x1d36e0: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1d36e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1d36e4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d36e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d36e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d36ec: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1d36ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1d36f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d36f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d36f4: 0xdca5c678  ld          $a1, -0x3988($a1)
    ctx->pc = 0x1d36f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d36f8: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D36F8u;
    SET_GPR_U32(ctx, 31, 0x1D3700u);
    ctx->pc = 0x1D36FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36F8u;
    // 0x1d36fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D36F8u, 0x1D3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3700u;
label_1d3700:
    // 0x1d3700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3708: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3708u;
    SET_GPR_U32(ctx, 31, 0x1D3710u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3708u, 0x1D3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3710u;
label_1d3710:
    // 0x1d3710: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3710u;
    {
        const bool branch_taken_0x1d3710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3710u;
        // 0x1d3714: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3710) {
            ctx->pc = 0x1D3744u;
            goto label_1d3744;
        }
    }
    ctx->pc = 0x1D3718u;
label_1d3718:
    // 0x1d3718: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d3718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d371c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d371cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3724: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3724u;
    SET_GPR_U32(ctx, 31, 0x1D372Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3724u, 0x1D372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D372Cu;
label_1d372c:
    // 0x1d372c: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d372cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d3730: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d3730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3738: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3738u;
    SET_GPR_U32(ctx, 31, 0x1D3740u);
    ctx->pc = 0x1D373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3738u;
    // 0x1d373c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3738u, 0x1D3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3740u;
label_1d3740:
    // 0x1d3740: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3744:
    // 0x1d3744: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3748: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D3748u;
    SET_GPR_U32(ctx, 31, 0x1D3750u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D3748u, 0x1D3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3750u;
label_1d3750:
    // 0x1d3750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3754: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3754u;
    SET_GPR_U32(ctx, 31, 0x1D375Cu);
    ctx->pc = 0x1D3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3754u;
    // 0x1d3758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3754u, 0x1D375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D375Cu;
label_1d375c:
    // 0x1d375c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3764: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3764u;
    SET_GPR_U32(ctx, 31, 0x1D376Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3764u, 0x1D376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D376Cu;
label_1d376c:
    // 0x1d376c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3774: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1d3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d3778: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1d3778u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d377c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3780: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3780u;
    SET_GPR_U32(ctx, 31, 0x1D3788u);
    ctx->pc = 0x1D3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3780u;
    // 0x1d3784: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3780u, 0x1D3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3788u;
label_1d3788:
    // 0x1d3788: 0x4400292  bltz        $v0, . + 4 + (0x292 << 2)
    ctx->pc = 0x1D3788u;
    {
        const bool branch_taken_0x1d3788 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3788u;
        // 0x1d378c: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3788) {
            ctx->pc = 0x1D41D4u;
            goto label_1d41d4;
        }
    }
    ctx->pc = 0x1D3790u;
    // 0x1d3790: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1d3790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1d3794: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d3794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d3798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d379c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D379Cu;
    SET_GPR_U32(ctx, 31, 0x1D37A4u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D379Cu, 0x1D37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37A4u;
label_1d37a4:
    // 0x1d37a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d37a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d37a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37ac: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D37ACu;
    SET_GPR_U32(ctx, 31, 0x1D37B4u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D37ACu, 0x1D37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37B4u;
label_1d37b4:
    // 0x1d37b4: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1D37B4u;
    {
        const bool branch_taken_0x1d37b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37B4u;
        // 0x1d37b8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37b4) {
            ctx->pc = 0x1D3A1Cu;
            goto label_1d3a1c;
        }
    }
    ctx->pc = 0x1D37BCu;
    // 0x1d37bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d37c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d37c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d37c4: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x1d37c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d37c8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D37C8u;
    {
        const bool branch_taken_0x1d37c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37C8u;
        // 0x1d37cc: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37c8) {
            ctx->pc = 0x1D3718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3718;
        }
    }
    ctx->pc = 0x1D37D0u;
    // 0x1d37d0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D37D0u;
    {
        const bool branch_taken_0x1d37d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d37d0) {
            ctx->pc = 0x1D38E0u;
            goto label_1d38e0;
        }
    }
    ctx->pc = 0x1D37D8u;
label_1d37d8:
    // 0x1d37d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d37d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d37e0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1d37e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d37e8: 0xdc84c678  ld          $a0, -0x3988($a0)
    ctx->pc = 0x1d37e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294952568)));
    // 0x1d37ec: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D37ECu;
    SET_GPR_U32(ctx, 31, 0x1D37F4u);
    ctx->pc = 0x1D37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37ECu;
    // 0x1d37f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D37ECu, 0x1D37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37F4u;
label_1d37f4:
    // 0x1d37f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d37f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d37f8:
    // 0x1d37f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d37f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37fc: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D37FCu;
    SET_GPR_U32(ctx, 31, 0x1D3804u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D37FCu, 0x1D3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3804u;
label_1d3804:
    // 0x1d3804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3808: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3808u;
    SET_GPR_U32(ctx, 31, 0x1D3810u);
    ctx->pc = 0x1D380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3808u;
    // 0x1d380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3808u, 0x1D3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3810u;
label_1d3810:
    // 0x1d3810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3818: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3818u;
    SET_GPR_U32(ctx, 31, 0x1D3820u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3818u, 0x1D3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3820u;
label_1d3820:
    // 0x1d3820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3824: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1d3824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d3828: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1d3828u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d382c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3830: 0x16640023  bne         $s3, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D3830u;
    {
        const bool branch_taken_0x1d3830 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3830u;
        // 0x1d3834: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3830) {
            ctx->pc = 0x1D38C0u;
            goto label_1d38c0;
        }
    }
    ctx->pc = 0x1D3838u;
    // 0x1d3838: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1d3838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1d383c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d383cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d3840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3844: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D3844u;
    SET_GPR_U32(ctx, 31, 0x1D384Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D3844u, 0x1D384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D384Cu;
label_1d384c:
    // 0x1d384c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3854: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3854u;
    SET_GPR_U32(ctx, 31, 0x1D385Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3854u, 0x1D385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D385Cu;
label_1d385c:
    // 0x1d385c: 0x1c40006f  bgtz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1D385Cu;
    {
        const bool branch_taken_0x1d385c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D385Cu;
        // 0x1d3860: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d385c) {
            ctx->pc = 0x1D3A1Cu;
            goto label_1d3a1c;
        }
    }
    ctx->pc = 0x1D3864u;
    // 0x1d3864: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1d3864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1d3868: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d3868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d386c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3870: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3870u;
    SET_GPR_U32(ctx, 31, 0x1D3878u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3870u, 0x1D3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3878u;
label_1d3878:
    // 0x1d3878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d387c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3880: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3880u;
    SET_GPR_U32(ctx, 31, 0x1D3888u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3880u, 0x1D3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3888u;
label_1d3888:
    // 0x1d3888: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D3888u;
    {
        const bool branch_taken_0x1d3888 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3888u;
        // 0x1d388c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3888) {
            ctx->pc = 0x1D38E0u;
            goto label_1d38e0;
        }
    }
    ctx->pc = 0x1D3890u;
    // 0x1d3890: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d3894: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1d3898:
    // 0x1d3898: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d3898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d389c: 0x0  nop
    ctx->pc = 0x1d389cu;
    // NOP
    // 0x1d38a0: 0x0  nop
    ctx->pc = 0x1d38a0u;
    // NOP
    // 0x1d38a4: 0x0  nop
    ctx->pc = 0x1d38a4u;
    // NOP
    // 0x1d38a8: 0x0  nop
    ctx->pc = 0x1d38a8u;
    // NOP
    // 0x1d38ac: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D38ACu;
    {
        const bool branch_taken_0x1d38ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d38ac) {
            ctx->pc = 0x1D38B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D38ACu;
            // 0x1d38b0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3898;
        }
    }
    ctx->pc = 0x1D38B4u;
    // 0x1d38b4: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x1D38B4u;
    {
        const bool branch_taken_0x1d38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38B4u;
        // 0x1d38b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38b4) {
            ctx->pc = 0x1D41D0u;
            goto label_1d41d0;
        }
    }
    ctx->pc = 0x1D38BCu;
    // 0x1d38bc: 0x0  nop
    ctx->pc = 0x1d38bcu;
    // NOP
label_1d38c0:
    // 0x1d38c0: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d38c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d38c4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d38c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d38c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38cc: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D38CCu;
    SET_GPR_U32(ctx, 31, 0x1D38D4u);
    ctx->pc = 0x1D38D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38CCu;
    // 0x1d38d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D38CCu, 0x1D38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38D4u;
label_1d38d4:
    // 0x1d38d4: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1D38D4u;
    {
        const bool branch_taken_0x1d38d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38D4u;
        // 0x1d38d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38d4) {
            ctx->pc = 0x1D37F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d37f8;
        }
    }
    ctx->pc = 0x1D38DCu;
    // 0x1d38dc: 0x0  nop
    ctx->pc = 0x1d38dcu;
    // NOP
label_1d38e0:
    // 0x1d38e0: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x1d38e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38e4: 0x8fbe002c  lw          $fp, 0x2C($sp)
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d38e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d38ec: 0x8fb50054  lw          $s5, 0x54($sp)
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1d38f0:
    // 0x1d38f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d38f4:
    // 0x1d38f4: 0x460006a  bltz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D38F4u;
    {
        const bool branch_taken_0x1d38f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38F4u;
        // 0x1d38f8: 0x2bc2000f  slti        $v0, $fp, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38f4) {
            ctx->pc = 0x1D3AA0u;
            goto label_1d3aa0;
        }
    }
    ctx->pc = 0x1D38FCu;
    // 0x1d38fc: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1D38FCu;
    {
        const bool branch_taken_0x1d38fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38FCu;
        // 0x1d3900: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38fc) {
            ctx->pc = 0x1D3AA4u;
            goto label_1d3aa4;
        }
    }
    ctx->pc = 0x1D3904u;
    // 0x1d3904: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1d3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d3908: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1d390c: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x1d3910: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d3910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d3914: 0xde31c680  ld          $s1, -0x3980($s1)
    ctx->pc = 0x1d3914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294952576)));
    // 0x1d3918: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D3918u;
    {
        const bool branch_taken_0x1d3918 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3918u;
        // 0x1d391c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3918) {
            ctx->pc = 0x1D3970u;
            goto label_1d3970;
        }
    }
    ctx->pc = 0x1D3920u;
    // 0x1d3920: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d3920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3924: 0x1c800012  bgtz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3924u;
    {
        const bool branch_taken_0x1d3924 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1d3924) {
            ctx->pc = 0x1D3970u;
            goto label_1d3970;
        }
    }
    ctx->pc = 0x1D392Cu;
    // 0x1d392c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d392cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1d3930: 0x480013b  bltz        $a0, . + 4 + (0x13B << 2)
    ctx->pc = 0x1D3930u;
    {
        const bool branch_taken_0x1d3930 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3930u;
        // 0x1d3934: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3930) {
            ctx->pc = 0x1D3E20u;
            goto label_1d3e20;
        }
    }
    ctx->pc = 0x1D3938u;
    // 0x1d3938: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1d3938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1d393c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d393cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d3940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3944: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3944u;
    SET_GPR_U32(ctx, 31, 0x1D394Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3944u, 0x1D394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D394Cu;
label_1d394c:
    // 0x1d394c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3954: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3954u;
    SET_GPR_U32(ctx, 31, 0x1D395Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3954u, 0x1D395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D395Cu;
label_1d395c:
    // 0x1d395c: 0x18400131  blez        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x1D395Cu;
    {
        const bool branch_taken_0x1d395c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D395Cu;
        // 0x1d3960: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d395c) {
            ctx->pc = 0x1D3E24u;
            goto label_1d3e24;
        }
    }
    ctx->pc = 0x1D3964u;
    // 0x1d3964: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x1D3964u;
    {
        const bool branch_taken_0x1d3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3964u;
        // 0x1d3968: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3964) {
            ctx->pc = 0x1D3E30u;
            goto label_1d3e30;
        }
    }
    ctx->pc = 0x1D396Cu;
    // 0x1d396c: 0x0  nop
    ctx->pc = 0x1d396cu;
    // NOP
label_1d3970:
    // 0x1d3970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3978: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D3978u;
    SET_GPR_U32(ctx, 31, 0x1D3980u);
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D3978u, 0x1D3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3980u;
label_1d3980:
    // 0x1d3980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3984: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D3984u;
    SET_GPR_U32(ctx, 31, 0x1D398Cu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D3984u, 0x1D398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D398Cu;
label_1d398c:
    // 0x1d398c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d398cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3990: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3990u;
    SET_GPR_U32(ctx, 31, 0x1D3998u);
    ctx->pc = 0x1D3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3990u;
    // 0x1d3994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3990u, 0x1D3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3998u;
label_1d3998:
    // 0x1d3998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d399c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39a0: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D39A0u;
    SET_GPR_U32(ctx, 31, 0x1D39A8u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D39A0u, 0x1D39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39A8u;
label_1d39a8:
    // 0x1d39a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39b0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D39B0u;
    SET_GPR_U32(ctx, 31, 0x1D39B8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D39B0u, 0x1D39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39B8u;
label_1d39b8:
    // 0x1d39b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d39b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39bc: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1d39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d39c0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1d39c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d39c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d39c8: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D39C8u;
    {
        const bool branch_taken_0x1d39c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39C8u;
        // 0x1d39cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39c8) {
            ctx->pc = 0x1D3A68u;
            goto label_1d3a68;
        }
    }
    ctx->pc = 0x1D39D0u;
    // 0x1d39d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d39d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39d4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D39D4u;
    SET_GPR_U32(ctx, 31, 0x1D39DCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D39D4u, 0x1D39DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39DCu;
label_1d39dc:
    // 0x1d39dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d39dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d39e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d39e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e8: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D39E8u;
    SET_GPR_U32(ctx, 31, 0x1D39F0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D39E8u, 0x1D39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39F0u;
label_1d39f0:
    // 0x1d39f0: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D39F0u;
    {
        const bool branch_taken_0x1d39f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39F0u;
        // 0x1d39f4: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39f0) {
            ctx->pc = 0x1D3A1Cu;
            goto label_1d3a1c;
        }
    }
    ctx->pc = 0x1D39F8u;
    // 0x1d39f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d39f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d39fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a00: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3A00u;
    SET_GPR_U32(ctx, 31, 0x1D3A08u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3A00u, 0x1D3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A08u;
label_1d3a08:
    // 0x1d3a08: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1D3A08u;
    {
        const bool branch_taken_0x1d3a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A08u;
        // 0x1d3a0c: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a08) {
            ctx->pc = 0x1D41D4u;
            goto label_1d41d4;
        }
    }
    ctx->pc = 0x1D3A10u;
    // 0x1d3a10: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1d3a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d3a14: 0x104001ef  beqz        $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x1D3A14u;
    {
        const bool branch_taken_0x1d3a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A14u;
        // 0x1d3a18: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a14) {
            ctx->pc = 0x1D41D4u;
            goto label_1d41d4;
        }
    }
    ctx->pc = 0x1D3A1Cu;
label_1d3a1c:
    // 0x1d3a1c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1d3a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d3a20: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d3a20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d3a24: 0x0  nop
    ctx->pc = 0x1d3a24u;
    // NOP
label_1d3a28:
    // 0x1d3a28: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d3a2c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3A2Cu;
    {
        const bool branch_taken_0x1d3a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A2Cu;
        // 0x1d3a30: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a2c) {
            ctx->pc = 0x1D3A58u;
            goto label_1d3a58;
        }
    }
    ctx->pc = 0x1D3A34u;
    // 0x1d3a34: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d3a38: 0x0  nop
    ctx->pc = 0x1d3a38u;
    // NOP
    // 0x1d3a3c: 0x0  nop
    ctx->pc = 0x1d3a3cu;
    // NOP
    // 0x1d3a40: 0x0  nop
    ctx->pc = 0x1d3a40u;
    // NOP
    // 0x1d3a44: 0x56a4fff8  bnel        $s5, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3A44u;
    {
        const bool branch_taken_0x1d3a44 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d3a44) {
            ctx->pc = 0x1D3A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3A44u;
            // 0x1d3a48: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3a28;
        }
    }
    ctx->pc = 0x1D3A4Cu;
    // 0x1d3a4c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d3a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d3a50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d3a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a54: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d3a54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1d3a58:
    // 0x1d3a58: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d3a5c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1d3a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d3a60: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x1D3A60u;
    {
        const bool branch_taken_0x1d3a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A60u;
        // 0x1d3a64: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a60) {
            ctx->pc = 0x1D41D0u;
            goto label_1d41d0;
        }
    }
    ctx->pc = 0x1D3A68u;
label_1d3a68:
    // 0x1d3a68: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d3a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d3a6c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d3a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3a70: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3A70u;
    SET_GPR_U32(ctx, 31, 0x1D3A78u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3A70u, 0x1D3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A78u;
label_1d3a78:
    // 0x1d3a78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a84: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3A84u;
    SET_GPR_U32(ctx, 31, 0x1D3A8Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3A84u, 0x1D3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A8Cu;
label_1d3a8c:
    // 0x1d3a8c: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1D3A8Cu;
    {
        const bool branch_taken_0x1d3a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A8Cu;
        // 0x1d3a90: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a8c) {
            ctx->pc = 0x1D41D0u;
            goto label_1d41d0;
        }
    }
    ctx->pc = 0x1D3A94u;
    // 0x1d3a94: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x1D3A94u;
    {
        const bool branch_taken_0x1d3a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a94) {
            ctx->pc = 0x1D3970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3970;
        }
    }
    ctx->pc = 0x1D3A9Cu;
    // 0x1d3a9c: 0x0  nop
    ctx->pc = 0x1d3a9cu;
    // NOP
label_1d3aa0:
    // 0x1d3aa0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1d3aa4:
    // 0x1d3aa4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d3aa8: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3aac: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x1d3aacu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d3ab0: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x1d3ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1d3ab4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1d3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1d3ab8: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D3AB8u;
    {
        const bool branch_taken_0x1d3ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AB8u;
        // 0x1d3abc: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ab8) {
            ctx->pc = 0x1D3B5Cu;
            goto label_1d3b5c;
        }
    }
    ctx->pc = 0x1D3AC0u;
    // 0x1d3ac0: 0x52c00009  beql        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3AC0u;
    {
        const bool branch_taken_0x1d3ac0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ac0) {
            ctx->pc = 0x1D3AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3AC0u;
            // 0x1d3ac4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3AE8u;
            goto label_1d3ae8;
        }
    }
    ctx->pc = 0x1D3AC8u;
    // 0x1d3ac8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3acc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3ACCu;
    {
        const bool branch_taken_0x1d3acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ACCu;
        // 0x1d3ad0: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3acc) {
            ctx->pc = 0x1D3B34u;
            goto label_1d3b34;
        }
    }
    ctx->pc = 0x1D3AD4u;
    // 0x1d3ad4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d3ad8: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1d3adc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D3ADCu;
    {
        const bool branch_taken_0x1d3adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ADCu;
        // 0x1d3ae0: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3adc) {
            ctx->pc = 0x1D3B34u;
            goto label_1d3b34;
        }
    }
    ctx->pc = 0x1D3AE4u;
    // 0x1d3ae4: 0x0  nop
    ctx->pc = 0x1d3ae4u;
    // NOP
label_1d3ae8:
    // 0x1d3ae8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1d3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1d3aec: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1d3aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3af0: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x1d3af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d3af4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3AF4u;
    {
        const bool branch_taken_0x1d3af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AF4u;
        // 0x1d3af8: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3af4) {
            ctx->pc = 0x1D3B1Cu;
            goto label_1d3b1c;
        }
    }
    ctx->pc = 0x1D3AFCu;
    // 0x1d3afc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1d3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1d3b00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b04: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d3b08: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1d3b08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d3b0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d3b10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d3b14: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1d3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1d3b18: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_1d3b1c:
    // 0x1d3b1c: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x1d3b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3b20: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3B20u;
    {
        const bool branch_taken_0x1d3b20 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1D3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B20u;
        // 0x1d3b24: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b20) {
            ctx->pc = 0x1D3B38u;
            goto label_1d3b38;
        }
    }
    ctx->pc = 0x1D3B28u;
    // 0x1d3b28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3b2c: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x1d3b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d3b30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d3b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b34:
    // 0x1d3b34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3b38:
    // 0x1d3b38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3b40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3b44: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x1D3B44u;
    SET_GPR_U32(ctx, 31, 0x1D3B4Cu);
    ctx->pc = 0x1D3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B44u;
    // 0x1d3b48: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x1D3B44u, 0x1D3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B4Cu;
label_1d3b4c:
    // 0x1d3b4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3b50: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3b54: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d3b58: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1d3b5c:
    // 0x1d3b5c: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D3B5Cu;
    {
        const bool branch_taken_0x1d3b5c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B5Cu;
        // 0x1d3b60: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b5c) {
            ctx->pc = 0x1D3B94u;
            goto label_1d3b94;
        }
    }
    ctx->pc = 0x1D3B64u;
    // 0x1d3b64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3b68: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3B68u;
    {
        const bool branch_taken_0x1d3b68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B68u;
        // 0x1d3b6c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b68) {
            ctx->pc = 0x1D3B94u;
            goto label_1d3b94;
        }
    }
    ctx->pc = 0x1D3B70u;
    // 0x1d3b70: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1d3b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d3b74: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x1d3b74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x1d3b78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3b7c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1d3b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d3b80: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1d3b84: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3b88: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1d3b8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d3b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d3b90: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1d3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1d3b94:
    // 0x1d3b94: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D3B94u;
    {
        const bool branch_taken_0x1d3b94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B94u;
        // 0x1d3b98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b94) {
            ctx->pc = 0x1D3C24u;
            goto label_1d3c24;
        }
    }
    ctx->pc = 0x1D3B9Cu;
    // 0x1d3b9c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d3ba0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D3BA0u;
    {
        const bool branch_taken_0x1d3ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BA0u;
        // 0x1d3ba4: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ba0) {
            ctx->pc = 0x1D3C10u;
            goto label_1d3c10;
        }
    }
    ctx->pc = 0x1D3BA8u;
    // 0x1d3ba8: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3BA8u;
    {
        const bool branch_taken_0x1d3ba8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1D3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BA8u;
        // 0x1d3bac: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ba8) {
            ctx->pc = 0x1D3BECu;
            goto label_1d3bec;
        }
    }
    ctx->pc = 0x1D3BB0u;
    // 0x1d3bb0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3bb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bb8: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3BB8u;
    SET_GPR_U32(ctx, 31, 0x1D3BC0u);
    ctx->pc = 0x1D3BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BB8u;
    // 0x1d3bbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3BB8u, 0x1D3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BC0u;
label_1d3bc0:
    // 0x1d3bc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bc4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1d3bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3bc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bcc: 0xc0755ea  jal         func_1D57A8
    ctx->pc = 0x1D3BCCu;
    SET_GPR_U32(ctx, 31, 0x1D3BD4u);
    ctx->pc = 0x1D3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BCCu;
    // 0x1d3bd0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57A8u, 0x1D3BCCu, 0x1D3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BD4u;
label_1d3bd4:
    // 0x1d3bd4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bd8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3bdc: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D3BDCu;
    SET_GPR_U32(ctx, 31, 0x1D3BE4u);
    ctx->pc = 0x1D3BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BDCu;
    // 0x1d3be0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D3BDCu, 0x1D3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BE4u;
label_1d3be4:
    // 0x1d3be4: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x1d3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x1d3be8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1d3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1d3bec:
    // 0x1d3bec: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1d3becu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d3bf0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3BF0u;
    {
        const bool branch_taken_0x1d3bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bf0) {
            ctx->pc = 0x1D3BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3BF0u;
            // 0x1d3bf4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3C24u;
            goto label_1d3c24;
        }
    }
    ctx->pc = 0x1D3BF8u;
    // 0x1d3bf8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3bfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d3bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c00: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3C00u;
    SET_GPR_U32(ctx, 31, 0x1D3C08u);
    ctx->pc = 0x1D3C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C00u;
    // 0x1d3c04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3C00u, 0x1D3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C08u;
label_1d3c08:
    // 0x1d3c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3C08u;
    {
        const bool branch_taken_0x1d3c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C08u;
        // 0x1d3c0c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c08) {
            ctx->pc = 0x1D3C20u;
            goto label_1d3c20;
        }
    }
    ctx->pc = 0x1D3C10u;
label_1d3c10:
    // 0x1d3c10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c14: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3C14u;
    SET_GPR_U32(ctx, 31, 0x1D3C1Cu);
    ctx->pc = 0x1D3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C14u;
    // 0x1d3c18: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3C14u, 0x1D3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C1Cu;
label_1d3c1c:
    // 0x1d3c1c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1d3c20:
    // 0x1d3c20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d3c24:
    // 0x1d3c24: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x1D3C24u;
    SET_GPR_U32(ctx, 31, 0x1D3C2Cu);
    ctx->pc = 0x1D3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C24u;
    // 0x1d3c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x1D3C24u, 0x1D3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C2Cu;
label_1d3c2c:
    // 0x1d3c2c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d3c30: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3C30u;
    {
        const bool branch_taken_0x1d3c30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C30u;
        // 0x1d3c34: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c30) {
            ctx->pc = 0x1D3C4Cu;
            goto label_1d3c4c;
        }
    }
    ctx->pc = 0x1D3C38u;
    // 0x1d3c38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c40: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3C40u;
    SET_GPR_U32(ctx, 31, 0x1D3C48u);
    ctx->pc = 0x1D3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C40u;
    // 0x1d3c44: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3C40u, 0x1D3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C48u;
label_1d3c48:
    // 0x1d3c48: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1d3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1d3c4c:
    // 0x1d3c4c: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3C4Cu;
    {
        const bool branch_taken_0x1d3c4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C4Cu;
        // 0x1d3c50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c4c) {
            ctx->pc = 0x1D3C94u;
            goto label_1d3c94;
        }
    }
    ctx->pc = 0x1D3C54u;
    // 0x1d3c54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3c58: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1d3c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1d3c5c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1d3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1d3c60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D3C60u;
    {
        const bool branch_taken_0x1d3c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C60u;
        // 0x1d3c64: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c60) {
            ctx->pc = 0x1D3C98u;
            goto label_1d3c98;
        }
    }
    ctx->pc = 0x1D3C68u;
    // 0x1d3c68: 0x14103f  dsra32      $v0, $s4, 0
    ctx->pc = 0x1d3c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x1d3c6c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1d3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1d3c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d3c74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3C74u;
    {
        const bool branch_taken_0x1d3c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C74u;
        // 0x1d3c78: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c74) {
            ctx->pc = 0x1D3C94u;
            goto label_1d3c94;
        }
    }
    ctx->pc = 0x1D3C7Cu;
    // 0x1d3c7c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d3c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3c84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d3c88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3c8c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1d3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1d3c90: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1d3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1d3c94:
    // 0x1d3c94: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d3c98:
    // 0x1d3c98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3C98u;
    {
        const bool branch_taken_0x1d3c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C98u;
        // 0x1d3c9c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c98) {
            ctx->pc = 0x1D3CC0u;
            goto label_1d3cc0;
        }
    }
    ctx->pc = 0x1D3CA0u;
    // 0x1d3ca0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1d3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3ca8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3cac: 0xc07558c  jal         func_1D5630
    ctx->pc = 0x1D3CACu;
    SET_GPR_U32(ctx, 31, 0x1D3CB4u);
    ctx->pc = 0x1D3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CACu;
    // 0x1d3cb0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5630u, 0x1D3CACu, 0x1D3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB4u;
label_1d3cb4:
    // 0x1d3cb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3CB8u;
    {
        const bool branch_taken_0x1d3cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB8u;
        // 0x1d3cbc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cb8) {
            ctx->pc = 0x1D3CC8u;
            goto label_1d3cc8;
        }
    }
    ctx->pc = 0x1D3CC0u;
label_1d3cc0:
    // 0x1d3cc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3cc4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d3cc8:
    // 0x1d3cc8: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x1d3cc8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d3ccc: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3CCCu;
    {
        const bool branch_taken_0x1d3ccc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CCCu;
        // 0x1d3cd0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ccc) {
            ctx->pc = 0x1D3CD8u;
            goto label_1d3cd8;
        }
    }
    ctx->pc = 0x1D3CD4u;
    // 0x1d3cd4: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x1d3cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d3cd8:
    // 0x1d3cd8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1d3cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d3cdc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3CDCu;
    {
        const bool branch_taken_0x1d3cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CDCu;
        // 0x1d3ce0: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cdc) {
            ctx->pc = 0x1D3D08u;
            goto label_1d3d08;
        }
    }
    ctx->pc = 0x1D3CE4u;
    // 0x1d3ce4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3ce8: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1d3cec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3cf0: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1d3cf4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3cf8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d3cfc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1d3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1d3d00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D3D00u;
    {
        const bool branch_taken_0x1d3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D00u;
        // 0x1d3d04: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d00) {
            ctx->pc = 0x1D3D30u;
            goto label_1d3d30;
        }
    }
    ctx->pc = 0x1D3D08u;
label_1d3d08:
    // 0x1d3d08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3D08u;
    {
        const bool branch_taken_0x1d3d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D08u;
        // 0x1d3d0c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d08) {
            ctx->pc = 0x1D3D34u;
            goto label_1d3d34;
        }
    }
    ctx->pc = 0x1D3D10u;
    // 0x1d3d10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3d14: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1d3d18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3d1c: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1d3d20: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d3d24: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3d28: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1d3d2c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1d3d30:
    // 0x1d3d30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1d3d34:
    // 0x1d3d34: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3D34u;
    {
        const bool branch_taken_0x1d3d34 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d3d34) {
            ctx->pc = 0x1D3D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D34u;
            // 0x1d3d38: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3D54u;
            goto label_1d3d54;
        }
    }
    ctx->pc = 0x1D3D3Cu;
    // 0x1d3d3c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3d40: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d3d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d44: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3D44u;
    SET_GPR_U32(ctx, 31, 0x1D3D4Cu);
    ctx->pc = 0x1D3D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D44u;
    // 0x1d3d48: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3D44u, 0x1D3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D4Cu;
label_1d3d4c:
    // 0x1d3d4c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1d3d50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3d54:
    // 0x1d3d54: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3D54u;
    {
        const bool branch_taken_0x1d3d54 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D54u;
        // 0x1d3d58: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d54) {
            ctx->pc = 0x1D3D74u;
            goto label_1d3d74;
        }
    }
    ctx->pc = 0x1D3D5Cu;
    // 0x1d3d5c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d3d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3d60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d3d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d64: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3D64u;
    SET_GPR_U32(ctx, 31, 0x1D3D6Cu);
    ctx->pc = 0x1D3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D64u;
    // 0x1d3d68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3D64u, 0x1D3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D6Cu;
label_1d3d6c:
    // 0x1d3d6c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1d3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1d3d70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3d74:
    // 0x1d3d74: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D3D74u;
    {
        const bool branch_taken_0x1d3d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D74u;
        // 0x1d3d78: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d74) {
            ctx->pc = 0x1D3DD0u;
            goto label_1d3dd0;
        }
    }
    ctx->pc = 0x1D3D7Cu;
    // 0x1d3d7c: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D84u);
    ctx->pc = 0x1D3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D7Cu;
    // 0x1d3d80: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3D7Cu, 0x1D3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D84u;
label_1d3d84:
    // 0x1d3d84: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3D84u;
    {
        const bool branch_taken_0x1d3d84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d3d84) {
            ctx->pc = 0x1D3D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D84u;
            // 0x1d3d88: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DD4u;
            goto label_1d3dd4;
        }
    }
    ctx->pc = 0x1D3D8Cu;
    // 0x1d3d8c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3d90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d94: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3d98: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3D98u;
    SET_GPR_U32(ctx, 31, 0x1D3DA0u);
    ctx->pc = 0x1D3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D98u;
    // 0x1d3d9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3D98u, 0x1D3DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA0u;
label_1d3da0:
    // 0x1d3da0: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d3da4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1d3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d3da8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3DA8u;
    {
        const bool branch_taken_0x1d3da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DA8u;
        // 0x1d3dac: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3da8) {
            ctx->pc = 0x1D3DC8u;
            goto label_1d3dc8;
        }
    }
    ctx->pc = 0x1D3DB0u;
    // 0x1d3db0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3db4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3db8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3dbc: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3DBCu;
    SET_GPR_U32(ctx, 31, 0x1D3DC4u);
    ctx->pc = 0x1D3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DBCu;
    // 0x1d3dc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3DBCu, 0x1D3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC4u;
label_1d3dc4:
    // 0x1d3dc4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1d3dc8:
    // 0x1d3dc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d3dcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1d3dd0:
    // 0x1d3dd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3dd4:
    // 0x1d3dd4: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D3DD4u;
    {
        const bool branch_taken_0x1d3dd4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD4u;
        // 0x1d3dd8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dd4) {
            ctx->pc = 0x1D3E48u;
            goto label_1d3e48;
        }
    }
    ctx->pc = 0x1D3DDCu;
    // 0x1d3ddc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3de0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d3de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d3de4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D3DE4u;
    {
        const bool branch_taken_0x1d3de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3de4) {
            ctx->pc = 0x1D3E48u;
            goto label_1d3e48;
        }
    }
    ctx->pc = 0x1D3DECu;
    // 0x1d3dec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d3decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3df0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3DF0u;
    {
        const bool branch_taken_0x1d3df0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF0u;
        // 0x1d3df4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3df0) {
            ctx->pc = 0x1D3E20u;
            goto label_1d3e20;
        }
    }
    ctx->pc = 0x1D3DF8u;
    // 0x1d3df8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dfc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d3dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d3e00: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3E00u;
    SET_GPR_U32(ctx, 31, 0x1D3E08u);
    ctx->pc = 0x1D3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E00u;
    // 0x1d3e04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3E00u, 0x1D3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E08u;
label_1d3e08:
    // 0x1d3e08: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e10: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3E10u;
    SET_GPR_U32(ctx, 31, 0x1D3E18u);
    ctx->pc = 0x1D3E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E10u;
    // 0x1d3e14: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3E10u, 0x1D3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E18u;
label_1d3e18:
    // 0x1d3e18: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3E18u;
    {
        const bool branch_taken_0x1d3e18 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d3e18) {
            ctx->pc = 0x1D3E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E18u;
            // 0x1d3e1c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E30u;
            goto label_1d3e30;
        }
    }
    ctx->pc = 0x1D3E20u;
label_1d3e20:
    // 0x1d3e20: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1d3e24:
    // 0x1d3e24: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1D3E24u;
    {
        const bool branch_taken_0x1d3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E24u;
        // 0x1d3e28: 0x2f027  nor         $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e24) {
            ctx->pc = 0x1D4194u;
            goto label_1d4194;
        }
    }
    ctx->pc = 0x1D3E2Cu;
    // 0x1d3e2c: 0x0  nop
    ctx->pc = 0x1d3e2cu;
    // NOP
label_1d3e30:
    // 0x1d3e30: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1d3e34: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d3e34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3e38: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1d3e38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3e3c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1D3E3Cu;
    {
        const bool branch_taken_0x1d3e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E3Cu;
        // 0x1d3e40: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e3c) {
            ctx->pc = 0x1D4194u;
            goto label_1d4194;
        }
    }
    ctx->pc = 0x1D3E44u;
    // 0x1d3e44: 0x0  nop
    ctx->pc = 0x1d3e44u;
    // NOP
label_1d3e48:
    // 0x1d3e48: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1D3E48u;
    {
        const bool branch_taken_0x1d3e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E48u;
        // 0x1d3e4c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e48) {
            ctx->pc = 0x1D40B4u;
            goto label_1d40b4;
        }
    }
    ctx->pc = 0x1D3E50u;
    // 0x1d3e50: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3E50u;
    {
        const bool branch_taken_0x1d3e50 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E50u;
        // 0x1d3e54: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e50) {
            ctx->pc = 0x1D3E70u;
            goto label_1d3e70;
        }
    }
    ctx->pc = 0x1D3E58u;
    // 0x1d3e58: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3e5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e60: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3E60u;
    SET_GPR_U32(ctx, 31, 0x1D3E68u);
    ctx->pc = 0x1D3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E60u;
    // 0x1d3e64: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3E60u, 0x1D3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E68u;
label_1d3e68:
    // 0x1d3e68: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3e6c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1d3e70:
    // 0x1d3e70: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3E70u;
    {
        const bool branch_taken_0x1d3e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E70u;
        // 0x1d3e74: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e70) {
            ctx->pc = 0x1D3EB8u;
            goto label_1d3eb8;
        }
    }
    ctx->pc = 0x1D3E78u;
    // 0x1d3e78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3e7c: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D3E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E84u);
    ctx->pc = 0x1D3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E7Cu;
    // 0x1d3e80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D3E7Cu, 0x1D3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E84u;
label_1d3e84:
    // 0x1d3e84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1d3e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d3e88: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1d3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1d3e8c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3e90: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x1d3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1d3e94: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x1d3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d3e98: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d3e9c: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1D3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3EA4u);
    ctx->pc = 0x1D3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E9Cu;
    // 0x1d3ea0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1D3E9Cu, 0x1D3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EA4u;
label_1d3ea4:
    // 0x1d3ea4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ea8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3eac: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3EACu;
    SET_GPR_U32(ctx, 31, 0x1D3EB4u);
    ctx->pc = 0x1D3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EACu;
    // 0x1d3eb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3EACu, 0x1D3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EB4u;
label_1d3eb4:
    // 0x1d3eb4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1d3eb8:
    // 0x1d3eb8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1d3eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1d3ebc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d3ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d3ec0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ec4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D3EC4u;
    {
        const bool branch_taken_0x1d3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EC4u;
        // 0x1d3ec8: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ec4) {
            ctx->pc = 0x1D3F48u;
            goto label_1d3f48;
        }
    }
    ctx->pc = 0x1D3ECCu;
    // 0x1d3ecc: 0x0  nop
    ctx->pc = 0x1d3eccu;
    // NOP
label_1d3ed0:
    // 0x1d3ed0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3ed4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ed8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3edc: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3EDCu;
    SET_GPR_U32(ctx, 31, 0x1D3EE4u);
    ctx->pc = 0x1D3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EDCu;
    // 0x1d3ee0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3EDCu, 0x1D3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EE4u;
label_1d3ee4:
    // 0x1d3ee4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1d3ee8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d3eec: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3ef0: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3EF0u;
    {
        const bool branch_taken_0x1d3ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EF0u;
        // 0x1d3ef4: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ef0) {
            ctx->pc = 0x1D3F18u;
            goto label_1d3f18;
        }
    }
    ctx->pc = 0x1D3EF8u;
    // 0x1d3ef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3efc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f00: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3f04: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3F04u;
    SET_GPR_U32(ctx, 31, 0x1D3F0Cu);
    ctx->pc = 0x1D3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F04u;
    // 0x1d3f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3F04u, 0x1D3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F0Cu;
label_1d3f0c:
    // 0x1d3f0c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3f10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3F10u;
    {
        const bool branch_taken_0x1d3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F10u;
        // 0x1d3f14: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f10) {
            ctx->pc = 0x1D3F44u;
            goto label_1d3f44;
        }
    }
    ctx->pc = 0x1D3F18u;
label_1d3f18:
    // 0x1d3f18: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f20: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3F20u;
    SET_GPR_U32(ctx, 31, 0x1D3F28u);
    ctx->pc = 0x1D3F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F20u;
    // 0x1d3f24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3F20u, 0x1D3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F28u;
label_1d3f28:
    // 0x1d3f28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f2c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3f30: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f38: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3F38u;
    SET_GPR_U32(ctx, 31, 0x1D3F40u);
    ctx->pc = 0x1D3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F38u;
    // 0x1d3f3c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3F38u, 0x1D3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F40u;
label_1d3f40:
    // 0x1d3f40: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1d3f44:
    // 0x1d3f44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3f44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3f48:
    // 0x1d3f48: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3f4c: 0xc074b66  jal         func_1D2D98
    ctx->pc = 0x1D3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F54u);
    ctx->pc = 0x1D3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F4Cu;
    // 0x1d3f50: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2D98u, 0x1D3F4Cu, 0x1D3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F54u;
label_1d3f54:
    // 0x1d3f54: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3f58: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d3f5c: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F64u);
    ctx->pc = 0x1D3F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F5Cu;
    // 0x1d3f60: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3F5Cu, 0x1D3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F64u;
label_1d3f64:
    // 0x1d3f64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f68: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f70: 0xc07571e  jal         func_1D5C78
    ctx->pc = 0x1D3F70u;
    SET_GPR_U32(ctx, 31, 0x1D3F78u);
    ctx->pc = 0x1D3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F70u;
    // 0x1d3f74: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C78u, 0x1D3F70u, 0x1D3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F78u;
label_1d3f78:
    // 0x1d3f78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d3f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f7c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1d3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d3f80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3F80u;
    {
        const bool branch_taken_0x1d3f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F80u;
        // 0x1d3f84: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f80) {
            ctx->pc = 0x1D3F98u;
            goto label_1d3f98;
        }
    }
    ctx->pc = 0x1D3F88u;
    // 0x1d3f88: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3f8c: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F94u);
    ctx->pc = 0x1D3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F8Cu;
    // 0x1d3f90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3F8Cu, 0x1D3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F94u;
label_1d3f94:
    // 0x1d3f94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f98:
    // 0x1d3f98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f9c: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D3F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3FA4u);
    ctx->pc = 0x1D3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F9Cu;
    // 0x1d3fa0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D3F9Cu, 0x1D3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3FA4u;
label_1d3fa4:
    // 0x1d3fa4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3FA4u;
    {
        const bool branch_taken_0x1d3fa4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FA4u;
        // 0x1d3fa8: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fa4) {
            ctx->pc = 0x1D3FD0u;
            goto label_1d3fd0;
        }
    }
    ctx->pc = 0x1D3FACu;
    // 0x1d3fac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3FACu;
    {
        const bool branch_taken_0x1d3fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fac) {
            ctx->pc = 0x1D3FD0u;
            goto label_1d3fd0;
        }
    }
    ctx->pc = 0x1D3FB4u;
    // 0x1d3fb4: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3FB4u;
    {
        const bool branch_taken_0x1d3fb4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB4u;
        // 0x1d3fb8: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fb4) {
            ctx->pc = 0x1D3FD0u;
            goto label_1d3fd0;
        }
    }
    ctx->pc = 0x1D3FBCu;
    // 0x1d3fbc: 0x12840029  beq         $s4, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3FBCu;
    {
        const bool branch_taken_0x1d3fbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FBCu;
        // 0x1d3fc0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fbc) {
            ctx->pc = 0x1D4064u;
            goto label_1d4064;
        }
    }
    ctx->pc = 0x1D3FC4u;
    // 0x1d3fc4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1d3fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d3fc8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1D3FC8u;
    {
        const bool branch_taken_0x1d3fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FC8u;
        // 0x1d3fcc: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fc8) {
            ctx->pc = 0x1D4190u;
            goto label_1d4190;
        }
    }
    ctx->pc = 0x1D3FD0u;
label_1d3fd0:
    // 0x1d3fd0: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3FD0u;
    {
        const bool branch_taken_0x1d3fd0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1d3fd0) {
            ctx->pc = 0x1D3FF0u;
            goto label_1d3ff0;
        }
    }
    ctx->pc = 0x1D3FD8u;
    // 0x1d3fd8: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3FD8u;
    {
        const bool branch_taken_0x1d3fd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FD8u;
        // 0x1d3fdc: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fd8) {
            ctx->pc = 0x1D4050u;
            goto label_1d4050;
        }
    }
    ctx->pc = 0x1D3FE0u;
    // 0x1d3fe0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D3FE0u;
    {
        const bool branch_taken_0x1d3fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fe0) {
            ctx->pc = 0x1D4050u;
            goto label_1d4050;
        }
    }
    ctx->pc = 0x1D3FE8u;
    // 0x1d3fe8: 0x16c00019  bnez        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3FE8u;
    {
        const bool branch_taken_0x1d3fe8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fe8) {
            ctx->pc = 0x1D4050u;
            goto label_1d4050;
        }
    }
    ctx->pc = 0x1D3FF0u;
label_1d3ff0:
    // 0x1d3ff0: 0x5a200067  blezl       $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1D3FF0u;
    {
        const bool branch_taken_0x1d3ff0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1d3ff0) {
            ctx->pc = 0x1D3FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3FF0u;
            // 0x1d3ff4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4190u;
            goto label_1d4190;
        }
    }
    ctx->pc = 0x1D3FF8u;
    // 0x1d3ff8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3ffc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4000: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D4000u;
    SET_GPR_U32(ctx, 31, 0x1D4008u);
    ctx->pc = 0x1D4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4000u;
    // 0x1d4004: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D4000u, 0x1D4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4008u;
label_1d4008:
    // 0x1d4008: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d400c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4010: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D4010u;
    SET_GPR_U32(ctx, 31, 0x1D4018u);
    ctx->pc = 0x1D4014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4010u;
    // 0x1d4014: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D4010u, 0x1D4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4018u;
label_1d4018:
    // 0x1d4018: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d4018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d401c: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D401Cu;
    {
        const bool branch_taken_0x1d401c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x1d401c) {
            ctx->pc = 0x1D4020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D401Cu;
            // 0x1d4020: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D403Cu;
            goto label_1d403c;
        }
    }
    ctx->pc = 0x1D4024u;
    // 0x1d4024: 0x5620005a  bnel        $s1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D4024u;
    {
        const bool branch_taken_0x1d4024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4024) {
            ctx->pc = 0x1D4028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4024u;
            // 0x1d4028: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4190u;
            goto label_1d4190;
        }
    }
    ctx->pc = 0x1D402Cu;
    // 0x1d402c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1d402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1d4030: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x1D4030u;
    {
        const bool branch_taken_0x1d4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4030) {
            ctx->pc = 0x1D4034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4030u;
            // 0x1d4034: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4190u;
            goto label_1d4190;
        }
    }
    ctx->pc = 0x1D4038u;
    // 0x1d4038: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d4038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d403c:
    // 0x1d403c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1d403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1d4040: 0x52820009  beql        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4040u;
    {
        const bool branch_taken_0x1d4040 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d4040) {
            ctx->pc = 0x1D4044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4040u;
            // 0x1d4044: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4068u;
            goto label_1d4068;
        }
    }
    ctx->pc = 0x1D4048u;
    // 0x1d4048: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1D4048u;
    {
        const bool branch_taken_0x1d4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4048u;
        // 0x1d404c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4048) {
            ctx->pc = 0x1D4190u;
            goto label_1d4190;
        }
    }
    ctx->pc = 0x1D4050u;
label_1d4050:
    // 0x1d4050: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4050u;
    {
        const bool branch_taken_0x1d4050 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1d4050) {
            ctx->pc = 0x1D4054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4050u;
            // 0x1d4054: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4080u;
            goto label_1d4080;
        }
    }
    ctx->pc = 0x1D4058u;
    // 0x1d4058: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1d4058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1d405c: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D405Cu;
    {
        const bool branch_taken_0x1d405c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D405Cu;
        // 0x1d4060: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d405c) {
            ctx->pc = 0x1D4078u;
            goto label_1d4078;
        }
    }
    ctx->pc = 0x1D4064u;
label_1d4064:
    // 0x1d4064: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1d4064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1d4068:
    // 0x1d4068: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x1d4068u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d406c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D406Cu;
    {
        const bool branch_taken_0x1d406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D406Cu;
        // 0x1d4070: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d406c) {
            ctx->pc = 0x1D4118u;
            goto label_1d4118;
        }
    }
    ctx->pc = 0x1D4074u;
    // 0x1d4074: 0x0  nop
    ctx->pc = 0x1d4074u;
    // NOP
label_1d4078:
    // 0x1d4078: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1D4078u;
    {
        const bool branch_taken_0x1d4078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4078u;
        // 0x1d407c: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4078) {
            ctx->pc = 0x1D4190u;
            goto label_1d4190;
        }
    }
    ctx->pc = 0x1D4080u;
label_1d4080:
    // 0x1d4080: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4084: 0x1662ff92  bne         $s3, $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1D4084u;
    {
        const bool branch_taken_0x1d4084 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4084u;
        // 0x1d4088: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4084) {
            ctx->pc = 0x1D3ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ed0;
        }
    }
    ctx->pc = 0x1D408Cu;
    // 0x1d408c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D408Cu;
    {
        const bool branch_taken_0x1d408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D408Cu;
        // 0x1d4090: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d408c) {
            ctx->pc = 0x1D40DCu;
            goto label_1d40dc;
        }
    }
    ctx->pc = 0x1D4094u;
    // 0x1d4094: 0x0  nop
    ctx->pc = 0x1d4094u;
    // NOP
label_1d4098:
    // 0x1d4098: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d4098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d409c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d40a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d40a4: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D40A4u;
    SET_GPR_U32(ctx, 31, 0x1D40ACu);
    ctx->pc = 0x1D40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40A4u;
    // 0x1d40a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D40A4u, 0x1D40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40ACu;
label_1d40ac:
    // 0x1d40ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d40b0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1d40b4:
    // 0x1d40b4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d40b8: 0xc074b66  jal         func_1D2D98
    ctx->pc = 0x1D40B8u;
    SET_GPR_U32(ctx, 31, 0x1D40C0u);
    ctx->pc = 0x1D40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40B8u;
    // 0x1d40bc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2D98u, 0x1D40B8u, 0x1D40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40C0u;
label_1d40c0:
    // 0x1d40c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d40c4: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d40c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d40c8: 0xa2b40000  sb          $s4, 0x0($s5)
    ctx->pc = 0x1d40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1d40cc: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x1d40ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d40d0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D40D0u;
    {
        const bool branch_taken_0x1d40d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40D0u;
        // 0x1d40d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40d0) {
            ctx->pc = 0x1D4098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4098;
        }
    }
    ctx->pc = 0x1D40D8u;
    // 0x1d40d8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d40d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1d40dc:
    // 0x1d40dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d40dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d40e0: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D40E0u;
    SET_GPR_U32(ctx, 31, 0x1D40E8u);
    ctx->pc = 0x1D40E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40E0u;
    // 0x1d40e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D40E0u, 0x1D40E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40E8u;
label_1d40e8:
    // 0x1d40e8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d40e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d40ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40f0: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D40F0u;
    SET_GPR_U32(ctx, 31, 0x1D40F8u);
    ctx->pc = 0x1D40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40F0u;
    // 0x1d40f4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D40F0u, 0x1D40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40F8u;
label_1d40f8:
    // 0x1d40f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d40f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40fc: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D40FCu;
    {
        const bool branch_taken_0x1d40fc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1d40fc) {
            ctx->pc = 0x1D4100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D40FCu;
            // 0x1d4100: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D411Cu;
            goto label_1d411c;
        }
    }
    ctx->pc = 0x1D4104u;
    // 0x1d4104: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D4104u;
    {
        const bool branch_taken_0x1d4104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4104u;
        // 0x1d4108: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4104) {
            ctx->pc = 0x1D4170u;
            goto label_1d4170;
        }
    }
    ctx->pc = 0x1D410Cu;
    // 0x1d410c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1d410cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1d4110: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D4110u;
    {
        const bool branch_taken_0x1d4110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4110) {
            ctx->pc = 0x1D4114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4110u;
            // 0x1d4114: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4174u;
            goto label_1d4174;
        }
    }
    ctx->pc = 0x1D4118u;
label_1d4118:
    // 0x1d4118: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d4118u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1d411c:
    // 0x1d411c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D411Cu;
    {
        const bool branch_taken_0x1d411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D411Cu;
        // 0x1d4120: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d411c) {
            ctx->pc = 0x1D4138u;
            goto label_1d4138;
        }
    }
    ctx->pc = 0x1D4124u;
    // 0x1d4124: 0x0  nop
    ctx->pc = 0x1d4124u;
    // NOP
label_1d4128:
    // 0x1d4128: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1d4128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d412c: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D412Cu;
    {
        const bool branch_taken_0x1d412c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d412c) {
            ctx->pc = 0x1D4130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D412Cu;
            // 0x1d4130: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4158u;
            goto label_1d4158;
        }
    }
    ctx->pc = 0x1D4134u;
    // 0x1d4134: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d4134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1d4138:
    // 0x1d4138: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d4138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d413c: 0x0  nop
    ctx->pc = 0x1d413cu;
    // NOP
    // 0x1d4140: 0x0  nop
    ctx->pc = 0x1d4140u;
    // NOP
    // 0x1d4144: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D4144u;
    {
        const bool branch_taken_0x1d4144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4144u;
        // 0x1d4148: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4144) {
            ctx->pc = 0x1D4128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4128;
        }
    }
    ctx->pc = 0x1D414Cu;
    // 0x1d414c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4150: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D4150u;
    {
        const bool branch_taken_0x1d4150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4150u;
        // 0x1d4154: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4150) {
            ctx->pc = 0x1D4190u;
            goto label_1d4190;
        }
    }
    ctx->pc = 0x1D4158u;
label_1d4158:
    // 0x1d4158: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1d4158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1d415c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d415cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d4160: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1d4160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d4164: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D4164u;
    {
        const bool branch_taken_0x1d4164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4164u;
        // 0x1d4168: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4164) {
            ctx->pc = 0x1D4194u;
            goto label_1d4194;
        }
    }
    ctx->pc = 0x1D416Cu;
    // 0x1d416c: 0x0  nop
    ctx->pc = 0x1d416cu;
    // NOP
label_1d4170:
    // 0x1d4170: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d4170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1d4174:
    // 0x1d4174: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d4174u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d4178: 0x0  nop
    ctx->pc = 0x1d4178u;
    // NOP
    // 0x1d417c: 0x0  nop
    ctx->pc = 0x1d417cu;
    // NOP
    // 0x1d4180: 0x0  nop
    ctx->pc = 0x1d4180u;
    // NOP
    // 0x1d4184: 0x0  nop
    ctx->pc = 0x1d4184u;
    // NOP
    // 0x1d4188: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4188u;
    {
        const bool branch_taken_0x1d4188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d4188) {
            ctx->pc = 0x1D418Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4188u;
            // 0x1d418c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4174;
        }
    }
    ctx->pc = 0x1D4190u;
label_1d4190:
    // 0x1d4190: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d4190u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1d4194:
    // 0x1d4194: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4198: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D4198u;
    SET_GPR_U32(ctx, 31, 0x1D41A0u);
    ctx->pc = 0x1D419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4198u;
    // 0x1d419c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D4198u, 0x1D41A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41A0u;
label_1d41a0:
    // 0x1d41a0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d41a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D41A4u;
    {
        const bool branch_taken_0x1d41a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41A4u;
        // 0x1d41a8: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41a4) {
            ctx->pc = 0x1D41D0u;
            goto label_1d41d0;
        }
    }
    ctx->pc = 0x1D41ACu;
    // 0x1d41ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D41ACu;
    {
        const bool branch_taken_0x1d41ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ACu;
        // 0x1d41b0: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ac) {
            ctx->pc = 0x1D41C8u;
            goto label_1d41c8;
        }
    }
    ctx->pc = 0x1D41B4u;
    // 0x1d41b4: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D41B4u;
    {
        const bool branch_taken_0x1d41b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41B4u;
        // 0x1d41b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41b4) {
            ctx->pc = 0x1D41C4u;
            goto label_1d41c4;
        }
    }
    ctx->pc = 0x1D41BCu;
    // 0x1d41bc: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D41BCu;
    SET_GPR_U32(ctx, 31, 0x1D41C4u);
    ctx->pc = 0x1D41C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41BCu;
    // 0x1d41c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D41BCu, 0x1D41C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41C4u;
label_1d41c4:
    // 0x1d41c4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d41c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1d41c8:
    // 0x1d41c8: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D41C8u;
    SET_GPR_U32(ctx, 31, 0x1D41D0u);
    ctx->pc = 0x1D41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41C8u;
    // 0x1d41cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D41C8u, 0x1D41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41D0u;
label_1d41d0:
    // 0x1d41d0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d41d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1d41d4:
    // 0x1d41d4: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D41D4u;
    SET_GPR_U32(ctx, 31, 0x1D41DCu);
    ctx->pc = 0x1D41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41D4u;
    // 0x1d41d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D41D4u, 0x1D41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41DCu;
label_1d41dc:
    // 0x1d41dc: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1d41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d41e0: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d41e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d41e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d41ec: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1d41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d41f0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D41F0u;
    {
        const bool branch_taken_0x1d41f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d41f0) {
            ctx->pc = 0x1D41F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41F0u;
            // 0x1d41f4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D41F8u;
            goto label_1d41f8;
        }
    }
    ctx->pc = 0x1D41F8u;
label_1d41f8:
    // 0x1d41f8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1d41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1d41fc:
    // 0x1d41fc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1d41fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4200: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1d4200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d4204: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1d4204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4208: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1d4208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d420c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1d420cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4210: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1d4210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d4214: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1d4214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4218: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1d4218u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d421c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1d421cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4220: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1d4220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d4224: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4224u;
        // 0x1d4228: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D422Cu;
}
