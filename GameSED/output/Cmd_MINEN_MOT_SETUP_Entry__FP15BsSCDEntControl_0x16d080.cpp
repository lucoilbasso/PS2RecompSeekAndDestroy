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

// Function: Cmd_MINEN_MOT_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x16d080 - 0x16d444
void Cmd_MINEN_MOT_SETUP_Entry__FP15BsSCDEntControl_0x16d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MINEN_MOT_SETUP_Entry__FP15BsSCDEntControl_0x16d080");
#endif

    switch (ctx->pc) {
        case 0x16d080u: goto label_16d080;
        case 0x16d084u: goto label_16d084;
        case 0x16d088u: goto label_16d088;
        case 0x16d08cu: goto label_16d08c;
        case 0x16d090u: goto label_16d090;
        case 0x16d094u: goto label_16d094;
        case 0x16d098u: goto label_16d098;
        case 0x16d09cu: goto label_16d09c;
        case 0x16d0a0u: goto label_16d0a0;
        case 0x16d0a4u: goto label_16d0a4;
        case 0x16d0a8u: goto label_16d0a8;
        case 0x16d0acu: goto label_16d0ac;
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0b4u: goto label_16d0b4;
        case 0x16d0b8u: goto label_16d0b8;
        case 0x16d0bcu: goto label_16d0bc;
        case 0x16d0c0u: goto label_16d0c0;
        case 0x16d0c4u: goto label_16d0c4;
        case 0x16d0c8u: goto label_16d0c8;
        case 0x16d0ccu: goto label_16d0cc;
        case 0x16d0d0u: goto label_16d0d0;
        case 0x16d0d4u: goto label_16d0d4;
        case 0x16d0d8u: goto label_16d0d8;
        case 0x16d0dcu: goto label_16d0dc;
        case 0x16d0e0u: goto label_16d0e0;
        case 0x16d0e4u: goto label_16d0e4;
        case 0x16d0e8u: goto label_16d0e8;
        case 0x16d0ecu: goto label_16d0ec;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d0f4u: goto label_16d0f4;
        case 0x16d0f8u: goto label_16d0f8;
        case 0x16d0fcu: goto label_16d0fc;
        case 0x16d100u: goto label_16d100;
        case 0x16d104u: goto label_16d104;
        case 0x16d108u: goto label_16d108;
        case 0x16d10cu: goto label_16d10c;
        case 0x16d110u: goto label_16d110;
        case 0x16d114u: goto label_16d114;
        case 0x16d118u: goto label_16d118;
        case 0x16d11cu: goto label_16d11c;
        case 0x16d120u: goto label_16d120;
        case 0x16d124u: goto label_16d124;
        case 0x16d128u: goto label_16d128;
        case 0x16d12cu: goto label_16d12c;
        case 0x16d130u: goto label_16d130;
        case 0x16d134u: goto label_16d134;
        case 0x16d138u: goto label_16d138;
        case 0x16d13cu: goto label_16d13c;
        case 0x16d140u: goto label_16d140;
        case 0x16d144u: goto label_16d144;
        case 0x16d148u: goto label_16d148;
        case 0x16d14cu: goto label_16d14c;
        case 0x16d150u: goto label_16d150;
        case 0x16d154u: goto label_16d154;
        case 0x16d158u: goto label_16d158;
        case 0x16d15cu: goto label_16d15c;
        case 0x16d160u: goto label_16d160;
        case 0x16d164u: goto label_16d164;
        case 0x16d168u: goto label_16d168;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d170u: goto label_16d170;
        case 0x16d174u: goto label_16d174;
        case 0x16d178u: goto label_16d178;
        case 0x16d17cu: goto label_16d17c;
        case 0x16d180u: goto label_16d180;
        case 0x16d184u: goto label_16d184;
        case 0x16d188u: goto label_16d188;
        case 0x16d18cu: goto label_16d18c;
        case 0x16d190u: goto label_16d190;
        case 0x16d194u: goto label_16d194;
        case 0x16d198u: goto label_16d198;
        case 0x16d19cu: goto label_16d19c;
        case 0x16d1a0u: goto label_16d1a0;
        case 0x16d1a4u: goto label_16d1a4;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b0u: goto label_16d1b0;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1b8u: goto label_16d1b8;
        case 0x16d1bcu: goto label_16d1bc;
        case 0x16d1c0u: goto label_16d1c0;
        case 0x16d1c4u: goto label_16d1c4;
        case 0x16d1c8u: goto label_16d1c8;
        case 0x16d1ccu: goto label_16d1cc;
        case 0x16d1d0u: goto label_16d1d0;
        case 0x16d1d4u: goto label_16d1d4;
        case 0x16d1d8u: goto label_16d1d8;
        case 0x16d1dcu: goto label_16d1dc;
        case 0x16d1e0u: goto label_16d1e0;
        case 0x16d1e4u: goto label_16d1e4;
        case 0x16d1e8u: goto label_16d1e8;
        case 0x16d1ecu: goto label_16d1ec;
        case 0x16d1f0u: goto label_16d1f0;
        case 0x16d1f4u: goto label_16d1f4;
        case 0x16d1f8u: goto label_16d1f8;
        case 0x16d1fcu: goto label_16d1fc;
        case 0x16d200u: goto label_16d200;
        case 0x16d204u: goto label_16d204;
        case 0x16d208u: goto label_16d208;
        case 0x16d20cu: goto label_16d20c;
        case 0x16d210u: goto label_16d210;
        case 0x16d214u: goto label_16d214;
        case 0x16d218u: goto label_16d218;
        case 0x16d21cu: goto label_16d21c;
        case 0x16d220u: goto label_16d220;
        case 0x16d224u: goto label_16d224;
        case 0x16d228u: goto label_16d228;
        case 0x16d22cu: goto label_16d22c;
        case 0x16d230u: goto label_16d230;
        case 0x16d234u: goto label_16d234;
        case 0x16d238u: goto label_16d238;
        case 0x16d23cu: goto label_16d23c;
        case 0x16d240u: goto label_16d240;
        case 0x16d244u: goto label_16d244;
        case 0x16d248u: goto label_16d248;
        case 0x16d24cu: goto label_16d24c;
        case 0x16d250u: goto label_16d250;
        case 0x16d254u: goto label_16d254;
        case 0x16d258u: goto label_16d258;
        case 0x16d25cu: goto label_16d25c;
        case 0x16d260u: goto label_16d260;
        case 0x16d264u: goto label_16d264;
        case 0x16d268u: goto label_16d268;
        case 0x16d26cu: goto label_16d26c;
        case 0x16d270u: goto label_16d270;
        case 0x16d274u: goto label_16d274;
        case 0x16d278u: goto label_16d278;
        case 0x16d27cu: goto label_16d27c;
        case 0x16d280u: goto label_16d280;
        case 0x16d284u: goto label_16d284;
        case 0x16d288u: goto label_16d288;
        case 0x16d28cu: goto label_16d28c;
        case 0x16d290u: goto label_16d290;
        case 0x16d294u: goto label_16d294;
        case 0x16d298u: goto label_16d298;
        case 0x16d29cu: goto label_16d29c;
        case 0x16d2a0u: goto label_16d2a0;
        case 0x16d2a4u: goto label_16d2a4;
        case 0x16d2a8u: goto label_16d2a8;
        case 0x16d2acu: goto label_16d2ac;
        case 0x16d2b0u: goto label_16d2b0;
        case 0x16d2b4u: goto label_16d2b4;
        case 0x16d2b8u: goto label_16d2b8;
        case 0x16d2bcu: goto label_16d2bc;
        case 0x16d2c0u: goto label_16d2c0;
        case 0x16d2c4u: goto label_16d2c4;
        case 0x16d2c8u: goto label_16d2c8;
        case 0x16d2ccu: goto label_16d2cc;
        case 0x16d2d0u: goto label_16d2d0;
        case 0x16d2d4u: goto label_16d2d4;
        case 0x16d2d8u: goto label_16d2d8;
        case 0x16d2dcu: goto label_16d2dc;
        case 0x16d2e0u: goto label_16d2e0;
        case 0x16d2e4u: goto label_16d2e4;
        case 0x16d2e8u: goto label_16d2e8;
        case 0x16d2ecu: goto label_16d2ec;
        case 0x16d2f0u: goto label_16d2f0;
        case 0x16d2f4u: goto label_16d2f4;
        case 0x16d2f8u: goto label_16d2f8;
        case 0x16d2fcu: goto label_16d2fc;
        case 0x16d300u: goto label_16d300;
        case 0x16d304u: goto label_16d304;
        case 0x16d308u: goto label_16d308;
        case 0x16d30cu: goto label_16d30c;
        case 0x16d310u: goto label_16d310;
        case 0x16d314u: goto label_16d314;
        case 0x16d318u: goto label_16d318;
        case 0x16d31cu: goto label_16d31c;
        case 0x16d320u: goto label_16d320;
        case 0x16d324u: goto label_16d324;
        case 0x16d328u: goto label_16d328;
        case 0x16d32cu: goto label_16d32c;
        case 0x16d330u: goto label_16d330;
        case 0x16d334u: goto label_16d334;
        case 0x16d338u: goto label_16d338;
        case 0x16d33cu: goto label_16d33c;
        case 0x16d340u: goto label_16d340;
        case 0x16d344u: goto label_16d344;
        case 0x16d348u: goto label_16d348;
        case 0x16d34cu: goto label_16d34c;
        case 0x16d350u: goto label_16d350;
        case 0x16d354u: goto label_16d354;
        case 0x16d358u: goto label_16d358;
        case 0x16d35cu: goto label_16d35c;
        case 0x16d360u: goto label_16d360;
        case 0x16d364u: goto label_16d364;
        case 0x16d368u: goto label_16d368;
        case 0x16d36cu: goto label_16d36c;
        case 0x16d370u: goto label_16d370;
        case 0x16d374u: goto label_16d374;
        case 0x16d378u: goto label_16d378;
        case 0x16d37cu: goto label_16d37c;
        case 0x16d380u: goto label_16d380;
        case 0x16d384u: goto label_16d384;
        case 0x16d388u: goto label_16d388;
        case 0x16d38cu: goto label_16d38c;
        case 0x16d390u: goto label_16d390;
        case 0x16d394u: goto label_16d394;
        case 0x16d398u: goto label_16d398;
        case 0x16d39cu: goto label_16d39c;
        case 0x16d3a0u: goto label_16d3a0;
        case 0x16d3a4u: goto label_16d3a4;
        case 0x16d3a8u: goto label_16d3a8;
        case 0x16d3acu: goto label_16d3ac;
        case 0x16d3b0u: goto label_16d3b0;
        case 0x16d3b4u: goto label_16d3b4;
        case 0x16d3b8u: goto label_16d3b8;
        case 0x16d3bcu: goto label_16d3bc;
        case 0x16d3c0u: goto label_16d3c0;
        case 0x16d3c4u: goto label_16d3c4;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3ccu: goto label_16d3cc;
        case 0x16d3d0u: goto label_16d3d0;
        case 0x16d3d4u: goto label_16d3d4;
        case 0x16d3d8u: goto label_16d3d8;
        case 0x16d3dcu: goto label_16d3dc;
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3e4u: goto label_16d3e4;
        case 0x16d3e8u: goto label_16d3e8;
        case 0x16d3ecu: goto label_16d3ec;
        case 0x16d3f0u: goto label_16d3f0;
        case 0x16d3f4u: goto label_16d3f4;
        case 0x16d3f8u: goto label_16d3f8;
        case 0x16d3fcu: goto label_16d3fc;
        case 0x16d400u: goto label_16d400;
        case 0x16d404u: goto label_16d404;
        case 0x16d408u: goto label_16d408;
        case 0x16d40cu: goto label_16d40c;
        case 0x16d410u: goto label_16d410;
        case 0x16d414u: goto label_16d414;
        case 0x16d418u: goto label_16d418;
        case 0x16d41cu: goto label_16d41c;
        case 0x16d420u: goto label_16d420;
        case 0x16d424u: goto label_16d424;
        case 0x16d428u: goto label_16d428;
        case 0x16d42cu: goto label_16d42c;
        case 0x16d430u: goto label_16d430;
        case 0x16d434u: goto label_16d434;
        case 0x16d438u: goto label_16d438;
        case 0x16d43cu: goto label_16d43c;
        case 0x16d440u: goto label_16d440;
        default: break;
    }

    ctx->pc = 0x16d080u;

label_16d080:
    // 0x16d080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16d084:
    // 0x16d084: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_16d088:
    // 0x16d088: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_16d08c:
    // 0x16d08c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16d08cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d090:
    // 0x16d090: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x16d090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_16d094:
    // 0x16d094: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16d098:
    // 0x16d098: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16d098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16d09c:
    // 0x16d09c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16d09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16d0a0:
    // 0x16d0a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x16d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_16d0a4:
    // 0x16d0a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_16d0a8:
    // 0x16d0a8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x16d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_16d0ac:
    // 0x16d0ac: 0xc06a26e  jal         func_1A89B8
label_16d0b0:
    if (ctx->pc == 0x16D0B0u) {
        ctx->pc = 0x16D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0ACu;
        // 0x16d0b0: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0B4u;
        goto label_16d0b4;
    }
    ctx->pc = 0x16D0ACu;
    SET_GPR_U32(ctx, 31, 0x16D0B4u);
    ctx->pc = 0x16D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0ACu;
    // 0x16d0b0: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D0ACu, 0x16D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0B4u;
label_16d0b4:
    // 0x16d0b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16d0b8:
    // 0x16d0b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d0bc:
    // 0x16d0bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16d0c0:
    // 0x16d0c0: 0xc04110c  jal         func_104430
label_16d0c4:
    if (ctx->pc == 0x16D0C4u) {
        ctx->pc = 0x16D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0C0u;
        // 0x16d0c4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0C8u;
        goto label_16d0c8;
    }
    ctx->pc = 0x16D0C0u;
    SET_GPR_U32(ctx, 31, 0x16D0C8u);
    ctx->pc = 0x16D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0C0u;
    // 0x16d0c4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16D0C0u, 0x16D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0C8u;
label_16d0c8:
    // 0x16d0c8: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x16d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
label_16d0cc:
    // 0x16d0cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16d0ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d0d0:
    // 0x16d0d0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x16d0d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_16d0d4:
    // 0x16d0d4: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_16d0d8:
    if (ctx->pc == 0x16D0D8u) {
        ctx->pc = 0x16D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0D4u;
        // 0x16d0d8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0DCu;
        goto label_16d0dc;
    }
    ctx->pc = 0x16D0D4u;
    {
        const bool branch_taken_0x16d0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d0d4) {
            ctx->pc = 0x16D0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D0D4u;
            // 0x16d0d8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D100u;
            goto label_16d100;
        }
    }
    ctx->pc = 0x16D0DCu;
label_16d0dc:
    // 0x16d0dc: 0xc04112c  jal         func_1044B0
label_16d0e0:
    if (ctx->pc == 0x16D0E0u) {
        ctx->pc = 0x16D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0DCu;
        // 0x16d0e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0E4u;
        goto label_16d0e4;
    }
    ctx->pc = 0x16D0DCu;
    SET_GPR_U32(ctx, 31, 0x16D0E4u);
    ctx->pc = 0x16D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0DCu;
    // 0x16d0e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x16D0DCu, 0x16D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0E4u;
label_16d0e4:
    // 0x16d0e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_16d0e8:
    // 0x16d0e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d0ec:
    // 0x16d0ec: 0x24a57498  addiu       $a1, $a1, 0x7498
    ctx->pc = 0x16d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29848));
label_16d0f0:
    // 0x16d0f0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x16d0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_16d0f4:
    // 0x16d0f4: 0xc0415ec  jal         func_1057B0
label_16d0f8:
    if (ctx->pc == 0x16D0F8u) {
        ctx->pc = 0x16D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0F4u;
        // 0x16d0f8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0FCu;
        goto label_16d0fc;
    }
    ctx->pc = 0x16D0F4u;
    SET_GPR_U32(ctx, 31, 0x16D0FCu);
    ctx->pc = 0x16D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0F4u;
    // 0x16d0f8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16D0F4u, 0x16D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0FCu;
label_16d0fc:
    // 0x16d0fc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_16d100:
    // 0x16d100: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d104:
    // 0x16d104: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x16d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16d108:
    // 0x16d108: 0x24120306  addiu       $s2, $zero, 0x306
    ctx->pc = 0x16d108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d10c:
    // 0x16d10c: 0xc0682b2  jal         func_1A0AC8
label_16d110:
    if (ctx->pc == 0x16D110u) {
        ctx->pc = 0x16D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D10Cu;
        // 0x16d110: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D114u;
        goto label_16d114;
    }
    ctx->pc = 0x16D10Cu;
    SET_GPR_U32(ctx, 31, 0x16D114u);
    ctx->pc = 0x16D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D10Cu;
    // 0x16d110: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16D10Cu, 0x16D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D114u;
label_16d114:
    // 0x16d114: 0xc0682b6  jal         func_1A0AD8
label_16d118:
    if (ctx->pc == 0x16D118u) {
        ctx->pc = 0x16D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D114u;
        // 0x16d118: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D11Cu;
        goto label_16d11c;
    }
    ctx->pc = 0x16D114u;
    SET_GPR_U32(ctx, 31, 0x16D11Cu);
    ctx->pc = 0x16D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D114u;
    // 0x16d118: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16D114u, 0x16D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D11Cu;
label_16d11c:
    // 0x16d11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16d11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d120:
    // 0x16d120: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16d120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16d124:
    // 0x16d124: 0x2442f690  addiu       $v0, $v0, -0x970
    ctx->pc = 0x16d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964880));
label_16d128:
    // 0x16d128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d12c:
    // 0x16d12c: 0xc061258  jal         func_184960
label_16d130:
    if (ctx->pc == 0x16D130u) {
        ctx->pc = 0x16D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D12Cu;
        // 0x16d130: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D134u;
        goto label_16d134;
    }
    ctx->pc = 0x16D12Cu;
    SET_GPR_U32(ctx, 31, 0x16D134u);
    ctx->pc = 0x16D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D12Cu;
    // 0x16d130: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x16D12Cu, 0x16D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D134u;
label_16d134:
    // 0x16d134: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x16d134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_16d138:
    // 0x16d138: 0xc7808490  lwc1        $f0, -0x7B70($gp)
    ctx->pc = 0x16d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d13c:
    // 0x16d13c: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_16d140:
    // 0x16d140: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x16d140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_16d144:
    // 0x16d144: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x16d144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_16d148:
    // 0x16d148: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x16d148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_16d14c:
    // 0x16d14c: 0xae130154  sw          $s3, 0x154($s0)
    ctx->pc = 0x16d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 19));
label_16d150:
    // 0x16d150: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x16d150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_16d154:
    // 0x16d154: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x16d154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_16d158:
    // 0x16d158: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x16d158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_16d15c:
    // 0x16d15c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d160:
    // 0x16d160: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_16d164:
    // 0x16d164: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16d164u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d168:
    // 0x16d168: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x16d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_16d16c:
    // 0x16d16c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d170:
    // 0x16d170: 0x260202a0  addiu       $v0, $s0, 0x2A0
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_16d174:
    // 0x16d174: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16d174u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d178:
    // 0x16d178: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16d17c:
    // 0x16d17c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16d17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d180:
    // 0x16d180: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x16d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
label_16d184:
    // 0x16d184: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16d184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16d188:
    // 0x16d188: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16d18c:
    // 0x16d18c: 0x40f809  jalr        $v0
label_16d190:
    if (ctx->pc == 0x16D190u) {
        ctx->pc = 0x16D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D18Cu;
        // 0x16d190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D194u;
        goto label_16d194;
    }
    ctx->pc = 0x16D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D194u);
        ctx->pc = 0x16D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D18Cu;
        // 0x16d190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D18Cu, 0x16D194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D194u;
label_16d194:
    // 0x16d194: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x16d194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_16d198:
    // 0x16d198: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x16d198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
label_16d19c:
    // 0x16d19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d1a0:
    // 0x16d1a0: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x16d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_16d1a4:
    // 0x16d1a4: 0xc06825c  jal         func_1A0970
label_16d1a8:
    if (ctx->pc == 0x16D1A8u) {
        ctx->pc = 0x16D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1A4u;
        // 0x16d1a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1ACu;
        goto label_16d1ac;
    }
    ctx->pc = 0x16D1A4u;
    SET_GPR_U32(ctx, 31, 0x16D1ACu);
    ctx->pc = 0x16D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1A4u;
    // 0x16d1a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16D1A4u, 0x16D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1ACu;
label_16d1ac:
    // 0x16d1ac: 0xc06a26e  jal         func_1A89B8
label_16d1b0:
    if (ctx->pc == 0x16D1B0u) {
        ctx->pc = 0x16D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1ACu;
        // 0x16d1b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1B4u;
        goto label_16d1b4;
    }
    ctx->pc = 0x16D1ACu;
    SET_GPR_U32(ctx, 31, 0x16D1B4u);
    ctx->pc = 0x16D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1ACu;
    // 0x16d1b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D1ACu, 0x16D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1B4u;
label_16d1b4:
    // 0x16d1b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_16d1b8:
    if (ctx->pc == 0x16D1B8u) {
        ctx->pc = 0x16D1BCu;
        goto label_16d1bc;
    }
    ctx->pc = 0x16D1B4u;
    {
        const bool branch_taken_0x16d1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d1b4) {
            ctx->pc = 0x16D1C8u;
            goto label_16d1c8;
        }
    }
    ctx->pc = 0x16D1BCu;
label_16d1bc:
    // 0x16d1bc: 0x10000011  b           . + 4 + (0x11 << 2)
label_16d1c0:
    if (ctx->pc == 0x16D1C0u) {
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1C4u;
        goto label_16d1c4;
    }
    ctx->pc = 0x16D1BCu;
    {
        const bool branch_taken_0x16d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1bc) {
            ctx->pc = 0x16D204u;
            goto label_16d204;
        }
    }
    ctx->pc = 0x16D1C4u;
label_16d1c4:
    // 0x16d1c4: 0x0  nop
    ctx->pc = 0x16d1c4u;
    // NOP
label_16d1c8:
    // 0x16d1c8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16d1cc:
    if (ctx->pc == 0x16D1CCu) {
        ctx->pc = 0x16D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1C8u;
        // 0x16d1cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1D0u;
        goto label_16d1d0;
    }
    ctx->pc = 0x16D1C8u;
    {
        const bool branch_taken_0x16d1c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16d1c8) {
            ctx->pc = 0x16D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D1C8u;
            // 0x16d1cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D1E0u;
            goto label_16d1e0;
        }
    }
    ctx->pc = 0x16D1D0u;
label_16d1d0:
    // 0x16d1d0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d1d4:
    // 0x16d1d4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16d1d8:
    // 0x16d1d8: 0x1000000a  b           . + 4 + (0xA << 2)
label_16d1dc:
    if (ctx->pc == 0x16D1DCu) {
        ctx->pc = 0x16D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D8u;
        // 0x16d1dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1E0u;
        goto label_16d1e0;
    }
    ctx->pc = 0x16D1D8u;
    {
        const bool branch_taken_0x16d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D8u;
        // 0x16d1dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1d8) {
            ctx->pc = 0x16D204u;
            goto label_16d204;
        }
    }
    ctx->pc = 0x16D1E0u;
label_16d1e0:
    // 0x16d1e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16d1e4:
    // 0x16d1e4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16d1e8:
    // 0x16d1e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16d1ec:
    if (ctx->pc == 0x16D1ECu) {
        ctx->pc = 0x16D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E8u;
        // 0x16d1ec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1F0u;
        goto label_16d1f0;
    }
    ctx->pc = 0x16D1E8u;
    {
        const bool branch_taken_0x16d1e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E8u;
        // 0x16d1ec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1e8) {
            ctx->pc = 0x16D200u;
            goto label_16d200;
        }
    }
    ctx->pc = 0x16D1F0u;
label_16d1f0:
    // 0x16d1f0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d1f4:
    // 0x16d1f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d1f8:
    if (ctx->pc == 0x16D1F8u) {
        ctx->pc = 0x16D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1F4u;
        // 0x16d1f8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1FCu;
        goto label_16d1fc;
    }
    ctx->pc = 0x16D1F4u;
    {
        const bool branch_taken_0x16d1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1F4u;
        // 0x16d1f8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1f4) {
            ctx->pc = 0x16D204u;
            goto label_16d204;
        }
    }
    ctx->pc = 0x16D1FCu;
label_16d1fc:
    // 0x16d1fc: 0x0  nop
    ctx->pc = 0x16d1fcu;
    // NOP
label_16d200:
    // 0x16d200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d204:
    // 0x16d204: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x16d204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
label_16d208:
    // 0x16d208: 0xc06a26e  jal         func_1A89B8
label_16d20c:
    if (ctx->pc == 0x16D20Cu) {
        ctx->pc = 0x16D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D208u;
        // 0x16d20c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D210u;
        goto label_16d210;
    }
    ctx->pc = 0x16D208u;
    SET_GPR_U32(ctx, 31, 0x16D210u);
    ctx->pc = 0x16D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D208u;
    // 0x16d20c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D208u, 0x16D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D210u;
label_16d210:
    // 0x16d210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16d214:
    if (ctx->pc == 0x16D214u) {
        ctx->pc = 0x16D218u;
        goto label_16d218;
    }
    ctx->pc = 0x16D210u;
    {
        const bool branch_taken_0x16d210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d210) {
            ctx->pc = 0x16D220u;
            goto label_16d220;
        }
    }
    ctx->pc = 0x16D218u;
label_16d218:
    // 0x16d218: 0x10000010  b           . + 4 + (0x10 << 2)
label_16d21c:
    if (ctx->pc == 0x16D21Cu) {
        ctx->pc = 0x16D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D218u;
        // 0x16d21c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D220u;
        goto label_16d220;
    }
    ctx->pc = 0x16D218u;
    {
        const bool branch_taken_0x16d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D218u;
        // 0x16d21c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d218) {
            ctx->pc = 0x16D25Cu;
            goto label_16d25c;
        }
    }
    ctx->pc = 0x16D220u;
label_16d220:
    // 0x16d220: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16d224:
    if (ctx->pc == 0x16D224u) {
        ctx->pc = 0x16D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D220u;
        // 0x16d224: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D228u;
        goto label_16d228;
    }
    ctx->pc = 0x16D220u;
    {
        const bool branch_taken_0x16d220 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16d220) {
            ctx->pc = 0x16D224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D220u;
            // 0x16d224: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D238u;
            goto label_16d238;
        }
    }
    ctx->pc = 0x16D228u;
label_16d228:
    // 0x16d228: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d22c:
    // 0x16d22c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16d230:
    // 0x16d230: 0x1000000a  b           . + 4 + (0xA << 2)
label_16d234:
    if (ctx->pc == 0x16D234u) {
        ctx->pc = 0x16D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D230u;
        // 0x16d234: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D238u;
        goto label_16d238;
    }
    ctx->pc = 0x16D230u;
    {
        const bool branch_taken_0x16d230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D230u;
        // 0x16d234: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d230) {
            ctx->pc = 0x16D25Cu;
            goto label_16d25c;
        }
    }
    ctx->pc = 0x16D238u;
label_16d238:
    // 0x16d238: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16d23c:
    // 0x16d23c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16d240:
    // 0x16d240: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16d244:
    if (ctx->pc == 0x16D244u) {
        ctx->pc = 0x16D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D240u;
        // 0x16d244: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D248u;
        goto label_16d248;
    }
    ctx->pc = 0x16D240u;
    {
        const bool branch_taken_0x16d240 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D240u;
        // 0x16d244: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d240) {
            ctx->pc = 0x16D258u;
            goto label_16d258;
        }
    }
    ctx->pc = 0x16D248u;
label_16d248:
    // 0x16d248: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d24c:
    // 0x16d24c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d250:
    if (ctx->pc == 0x16D250u) {
        ctx->pc = 0x16D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D24Cu;
        // 0x16d250: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D254u;
        goto label_16d254;
    }
    ctx->pc = 0x16D24Cu;
    {
        const bool branch_taken_0x16d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D24Cu;
        // 0x16d250: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d24c) {
            ctx->pc = 0x16D25Cu;
            goto label_16d25c;
        }
    }
    ctx->pc = 0x16D254u;
label_16d254:
    // 0x16d254: 0x0  nop
    ctx->pc = 0x16d254u;
    // NOP
label_16d258:
    // 0x16d258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d25c:
    // 0x16d25c: 0xae2202b4  sw          $v0, 0x2B4($s1)
    ctx->pc = 0x16d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
label_16d260:
    // 0x16d260: 0xc06a26e  jal         func_1A89B8
label_16d264:
    if (ctx->pc == 0x16D264u) {
        ctx->pc = 0x16D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D260u;
        // 0x16d264: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D268u;
        goto label_16d268;
    }
    ctx->pc = 0x16D260u;
    SET_GPR_U32(ctx, 31, 0x16D268u);
    ctx->pc = 0x16D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D260u;
    // 0x16d264: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D260u, 0x16D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D268u;
label_16d268:
    // 0x16d268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16d26c:
    if (ctx->pc == 0x16D26Cu) {
        ctx->pc = 0x16D270u;
        goto label_16d270;
    }
    ctx->pc = 0x16D268u;
    {
        const bool branch_taken_0x16d268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d268) {
            ctx->pc = 0x16D278u;
            goto label_16d278;
        }
    }
    ctx->pc = 0x16D270u;
label_16d270:
    // 0x16d270: 0x10000010  b           . + 4 + (0x10 << 2)
label_16d274:
    if (ctx->pc == 0x16D274u) {
        ctx->pc = 0x16D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D270u;
        // 0x16d274: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D278u;
        goto label_16d278;
    }
    ctx->pc = 0x16D270u;
    {
        const bool branch_taken_0x16d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D270u;
        // 0x16d274: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d270) {
            ctx->pc = 0x16D2B4u;
            goto label_16d2b4;
        }
    }
    ctx->pc = 0x16D278u;
label_16d278:
    // 0x16d278: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16d27c:
    if (ctx->pc == 0x16D27Cu) {
        ctx->pc = 0x16D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D278u;
        // 0x16d27c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D280u;
        goto label_16d280;
    }
    ctx->pc = 0x16D278u;
    {
        const bool branch_taken_0x16d278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16d278) {
            ctx->pc = 0x16D27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D278u;
            // 0x16d27c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D290u;
            goto label_16d290;
        }
    }
    ctx->pc = 0x16D280u;
label_16d280:
    // 0x16d280: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d284:
    // 0x16d284: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16d288:
    // 0x16d288: 0x1000000a  b           . + 4 + (0xA << 2)
label_16d28c:
    if (ctx->pc == 0x16D28Cu) {
        ctx->pc = 0x16D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D288u;
        // 0x16d28c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D290u;
        goto label_16d290;
    }
    ctx->pc = 0x16D288u;
    {
        const bool branch_taken_0x16d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D288u;
        // 0x16d28c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d288) {
            ctx->pc = 0x16D2B4u;
            goto label_16d2b4;
        }
    }
    ctx->pc = 0x16D290u;
label_16d290:
    // 0x16d290: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16d294:
    // 0x16d294: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16d298:
    // 0x16d298: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16d29c:
    if (ctx->pc == 0x16D29Cu) {
        ctx->pc = 0x16D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D298u;
        // 0x16d29c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2A0u;
        goto label_16d2a0;
    }
    ctx->pc = 0x16D298u;
    {
        const bool branch_taken_0x16d298 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D298u;
        // 0x16d29c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d298) {
            ctx->pc = 0x16D2B0u;
            goto label_16d2b0;
        }
    }
    ctx->pc = 0x16D2A0u;
label_16d2a0:
    // 0x16d2a0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d2a4:
    // 0x16d2a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d2a8:
    if (ctx->pc == 0x16D2A8u) {
        ctx->pc = 0x16D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2A4u;
        // 0x16d2a8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2ACu;
        goto label_16d2ac;
    }
    ctx->pc = 0x16D2A4u;
    {
        const bool branch_taken_0x16d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2A4u;
        // 0x16d2a8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2a4) {
            ctx->pc = 0x16D2B4u;
            goto label_16d2b4;
        }
    }
    ctx->pc = 0x16D2ACu;
label_16d2ac:
    // 0x16d2ac: 0x0  nop
    ctx->pc = 0x16d2acu;
    // NOP
label_16d2b0:
    // 0x16d2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d2b4:
    // 0x16d2b4: 0xae2202b8  sw          $v0, 0x2B8($s1)
    ctx->pc = 0x16d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
label_16d2b8:
    // 0x16d2b8: 0xc06a26e  jal         func_1A89B8
label_16d2bc:
    if (ctx->pc == 0x16D2BCu) {
        ctx->pc = 0x16D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2B8u;
        // 0x16d2bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2C0u;
        goto label_16d2c0;
    }
    ctx->pc = 0x16D2B8u;
    SET_GPR_U32(ctx, 31, 0x16D2C0u);
    ctx->pc = 0x16D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2B8u;
    // 0x16d2bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D2B8u, 0x16D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2C0u;
label_16d2c0:
    // 0x16d2c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16d2c4:
    if (ctx->pc == 0x16D2C4u) {
        ctx->pc = 0x16D2C8u;
        goto label_16d2c8;
    }
    ctx->pc = 0x16D2C0u;
    {
        const bool branch_taken_0x16d2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d2c0) {
            ctx->pc = 0x16D2D0u;
            goto label_16d2d0;
        }
    }
    ctx->pc = 0x16D2C8u;
label_16d2c8:
    // 0x16d2c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_16d2cc:
    if (ctx->pc == 0x16D2CCu) {
        ctx->pc = 0x16D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C8u;
        // 0x16d2cc: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2D0u;
        goto label_16d2d0;
    }
    ctx->pc = 0x16D2C8u;
    {
        const bool branch_taken_0x16d2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C8u;
        // 0x16d2cc: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2c8) {
            ctx->pc = 0x16D30Cu;
            goto label_16d30c;
        }
    }
    ctx->pc = 0x16D2D0u;
label_16d2d0:
    // 0x16d2d0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16d2d4:
    if (ctx->pc == 0x16D2D4u) {
        ctx->pc = 0x16D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2D0u;
        // 0x16d2d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2D8u;
        goto label_16d2d8;
    }
    ctx->pc = 0x16D2D0u;
    {
        const bool branch_taken_0x16d2d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16d2d0) {
            ctx->pc = 0x16D2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D2D0u;
            // 0x16d2d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D2E8u;
            goto label_16d2e8;
        }
    }
    ctx->pc = 0x16D2D8u;
label_16d2d8:
    // 0x16d2d8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d2dc:
    // 0x16d2dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16d2e0:
    // 0x16d2e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_16d2e4:
    if (ctx->pc == 0x16D2E4u) {
        ctx->pc = 0x16D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E0u;
        // 0x16d2e4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2E8u;
        goto label_16d2e8;
    }
    ctx->pc = 0x16D2E0u;
    {
        const bool branch_taken_0x16d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E0u;
        // 0x16d2e4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2e0) {
            ctx->pc = 0x16D30Cu;
            goto label_16d30c;
        }
    }
    ctx->pc = 0x16D2E8u;
label_16d2e8:
    // 0x16d2e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16d2ec:
    // 0x16d2ec: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16d2f0:
    // 0x16d2f0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16d2f4:
    if (ctx->pc == 0x16D2F4u) {
        ctx->pc = 0x16D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2F0u;
        // 0x16d2f4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2F8u;
        goto label_16d2f8;
    }
    ctx->pc = 0x16D2F0u;
    {
        const bool branch_taken_0x16d2f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2F0u;
        // 0x16d2f4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2f0) {
            ctx->pc = 0x16D308u;
            goto label_16d308;
        }
    }
    ctx->pc = 0x16D2F8u;
label_16d2f8:
    // 0x16d2f8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16d2fc:
    // 0x16d2fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d300:
    if (ctx->pc == 0x16D300u) {
        ctx->pc = 0x16D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2FCu;
        // 0x16d300: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D304u;
        goto label_16d304;
    }
    ctx->pc = 0x16D2FCu;
    {
        const bool branch_taken_0x16d2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2FCu;
        // 0x16d300: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2fc) {
            ctx->pc = 0x16D30Cu;
            goto label_16d30c;
        }
    }
    ctx->pc = 0x16D304u;
label_16d304:
    // 0x16d304: 0x0  nop
    ctx->pc = 0x16d304u;
    // NOP
label_16d308:
    // 0x16d308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d30c:
    // 0x16d30c: 0xae2202bc  sw          $v0, 0x2BC($s1)
    ctx->pc = 0x16d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
label_16d310:
    // 0x16d310: 0xc06a282  jal         func_1A8A08
label_16d314:
    if (ctx->pc == 0x16D314u) {
        ctx->pc = 0x16D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D310u;
        // 0x16d314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D318u;
        goto label_16d318;
    }
    ctx->pc = 0x16D310u;
    SET_GPR_U32(ctx, 31, 0x16D318u);
    ctx->pc = 0x16D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D310u;
    // 0x16d314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D310u, 0x16D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D318u;
label_16d318:
    // 0x16d318: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16d31c:
    // 0x16d31c: 0xc06a282  jal         func_1A8A08
label_16d320:
    if (ctx->pc == 0x16D320u) {
        ctx->pc = 0x16D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D31Cu;
        // 0x16d320: 0xe62002c0  swc1        $f0, 0x2C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D324u;
        goto label_16d324;
    }
    ctx->pc = 0x16D31Cu;
    SET_GPR_U32(ctx, 31, 0x16D324u);
    ctx->pc = 0x16D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D31Cu;
    // 0x16d320: 0xe62002c0  swc1        $f0, 0x2C0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D31Cu, 0x16D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D324u;
label_16d324:
    // 0x16d324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16d328:
    // 0x16d328: 0xc06a282  jal         func_1A8A08
label_16d32c:
    if (ctx->pc == 0x16D32Cu) {
        ctx->pc = 0x16D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D328u;
        // 0x16d32c: 0xe62002c4  swc1        $f0, 0x2C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D330u;
        goto label_16d330;
    }
    ctx->pc = 0x16D328u;
    SET_GPR_U32(ctx, 31, 0x16D330u);
    ctx->pc = 0x16D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D328u;
    // 0x16d32c: 0xe62002c4  swc1        $f0, 0x2C4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D328u, 0x16D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D330u;
label_16d330:
    // 0x16d330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16d334:
    // 0x16d334: 0xc06a282  jal         func_1A8A08
label_16d338:
    if (ctx->pc == 0x16D338u) {
        ctx->pc = 0x16D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D334u;
        // 0x16d338: 0xe62002c8  swc1        $f0, 0x2C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D33Cu;
        goto label_16d33c;
    }
    ctx->pc = 0x16D334u;
    SET_GPR_U32(ctx, 31, 0x16D33Cu);
    ctx->pc = 0x16D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D334u;
    // 0x16d338: 0xe62002c8  swc1        $f0, 0x2C8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16D334u, 0x16D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D33Cu;
label_16d33c:
    // 0x16d33c: 0xc62302c0  lwc1        $f3, 0x2C0($s1)
    ctx->pc = 0x16d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16d340:
    // 0x16d340: 0x46000140  add.s       $f5, $f0, $f0
    ctx->pc = 0x16d340u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16d344:
    // 0x16d344: 0xc7818494  lwc1        $f1, -0x7B6C($gp)
    ctx->pc = 0x16d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d348:
    // 0x16d348: 0xc62402c4  lwc1        $f4, 0x2C4($s1)
    ctx->pc = 0x16d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16d34c:
    // 0x16d34c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16d350:
    // 0x16d350: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x16d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16d354:
    // 0x16d354: 0x0  nop
    ctx->pc = 0x16d354u;
    // NOP
label_16d358:
    // 0x16d358: 0x0  nop
    ctx->pc = 0x16d358u;
    // NOP
label_16d35c:
    // 0x16d35c: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x16d35cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
label_16d360:
    // 0x16d360: 0xe62002cc  swc1        $f0, 0x2CC($s1)
    ctx->pc = 0x16d360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
label_16d364:
    // 0x16d364: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16d368:
    // 0x16d368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d36c:
    // 0x16d36c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16d36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_16d370:
    // 0x16d370: 0x2450ed50  addiu       $s0, $v0, -0x12B0
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
label_16d374:
    // 0x16d374: 0x0  nop
    ctx->pc = 0x16d374u;
    // NOP
label_16d378:
    // 0x16d378: 0x0  nop
    ctx->pc = 0x16d378u;
    // NOP
label_16d37c:
    // 0x16d37c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x16d37cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_16d380:
    // 0x16d380: 0xe62302d0  swc1        $f3, 0x2D0($s1)
    ctx->pc = 0x16d380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
label_16d384:
    // 0x16d384: 0x0  nop
    ctx->pc = 0x16d384u;
    // NOP
label_16d388:
    // 0x16d388: 0x0  nop
    ctx->pc = 0x16d388u;
    // NOP
label_16d38c:
    // 0x16d38c: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x16d38cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
label_16d390:
    // 0x16d390: 0xe62102d4  swc1        $f1, 0x2D4($s1)
    ctx->pc = 0x16d390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
label_16d394:
    // 0x16d394: 0xc06164c  jal         func_185930
label_16d398:
    if (ctx->pc == 0x16D398u) {
        ctx->pc = 0x16D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D394u;
        // 0x16d398: 0xe62202d8  swc1        $f2, 0x2D8($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D39Cu;
        goto label_16d39c;
    }
    ctx->pc = 0x16D394u;
    SET_GPR_U32(ctx, 31, 0x16D39Cu);
    ctx->pc = 0x16D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D394u;
    // 0x16d398: 0xe62202d8  swc1        $f2, 0x2D8($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16D394u, 0x16D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D39Cu;
label_16d39c:
    // 0x16d39c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d3a0:
    // 0x16d3a0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16d3a4:
    // 0x16d3a4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_16d3a8:
    if (ctx->pc == 0x16D3A8u) {
        ctx->pc = 0x16D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3A4u;
        // 0x16d3a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3ACu;
        goto label_16d3ac;
    }
    ctx->pc = 0x16D3A4u;
    {
        const bool branch_taken_0x16d3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3A4u;
        // 0x16d3a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3a4) {
            ctx->pc = 0x16D3D4u;
            goto label_16d3d4;
        }
    }
    ctx->pc = 0x16D3ACu;
label_16d3ac:
    // 0x16d3ac: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x16d3acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_16d3b0:
    // 0x16d3b0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x16d3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_16d3b4:
    // 0x16d3b4: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x16d3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_16d3b8:
    // 0x16d3b8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16d3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_16d3bc:
    // 0x16d3bc: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x16d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
label_16d3c0:
    // 0x16d3c0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x16d3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_16d3c4:
    // 0x16d3c4: 0xac91001c  sw          $s1, 0x1C($a0)
    ctx->pc = 0x16d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 17));
label_16d3c8:
    // 0x16d3c8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x16d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_16d3cc:
    // 0x16d3cc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_16d3d0:
    // 0x16d3d0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x16d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_16d3d4:
    // 0x16d3d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16d3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d3d8:
    // 0x16d3d8: 0xc040ce8  jal         func_1033A0
label_16d3dc:
    if (ctx->pc == 0x16D3DCu) {
        ctx->pc = 0x16D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D8u;
        // 0x16d3dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3E0u;
        goto label_16d3e0;
    }
    ctx->pc = 0x16D3D8u;
    SET_GPR_U32(ctx, 31, 0x16D3E0u);
    ctx->pc = 0x16D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3D8u;
    // 0x16d3dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16D3D8u, 0x16D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3E0u;
label_16d3e0:
    // 0x16d3e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16d3e4:
    // 0x16d3e4: 0x244274b0  addiu       $v0, $v0, 0x74B0
    ctx->pc = 0x16d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29872));
label_16d3e8:
    // 0x16d3e8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x16d3e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_16d3ec:
    // 0x16d3ec: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x16d3ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_16d3f0:
    // 0x16d3f0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x16d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_16d3f4:
    // 0x16d3f4: 0xc04c99a  jal         func_132668
label_16d3f8:
    if (ctx->pc == 0x16D3F8u) {
        ctx->pc = 0x16D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3F4u;
        // 0x16d3f8: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3FCu;
        goto label_16d3fc;
    }
    ctx->pc = 0x16D3F4u;
    SET_GPR_U32(ctx, 31, 0x16D3FCu);
    ctx->pc = 0x16D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3F4u;
    // 0x16d3f8: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D3F4u, 0x16D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3FCu;
label_16d3fc:
    // 0x16d3fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16d3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16d400:
    // 0x16d400: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16d400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16d404:
    // 0x16d404: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16d404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_16d408:
    // 0x16d408: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x16d408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16d40c:
    // 0x16d40c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16d40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16d410:
    // 0x16d410: 0xc04c64e  jal         func_131938
label_16d414:
    if (ctx->pc == 0x16D414u) {
        ctx->pc = 0x16D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D410u;
        // 0x16d414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D418u;
        goto label_16d418;
    }
    ctx->pc = 0x16D410u;
    SET_GPR_U32(ctx, 31, 0x16D418u);
    ctx->pc = 0x16D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D410u;
    // 0x16d414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131938u, 0x16D410u, 0x16D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D418u;
label_16d418:
    // 0x16d418: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x16d418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
label_16d41c:
    // 0x16d41c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16d41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d420:
    // 0x16d420: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16d420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16d424:
    // 0x16d424: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16d424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16d428:
    // 0x16d428: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16d428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16d42c:
    // 0x16d42c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16d42cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16d430:
    // 0x16d430: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16d430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16d434:
    // 0x16d434: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x16d434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16d438:
    // 0x16d438: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16d438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16d43c:
    // 0x16d43c: 0x3e00008  jr          $ra
label_16d440:
    if (ctx->pc == 0x16D440u) {
        ctx->pc = 0x16D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D43Cu;
        // 0x16d440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D444u;
        goto label_fallthrough_0x16d43c;
    }
    ctx->pc = 0x16D43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D43Cu;
        // 0x16d440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d43c:
    ctx->pc = 0x16D444u;
}
