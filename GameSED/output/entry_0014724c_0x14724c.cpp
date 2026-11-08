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

// Function: entry_0014724c
// Address: 0x14724c - 0x1472f0
void entry_0014724c_0x14724c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014724c_0x14724c");
#endif

    switch (ctx->pc) {
        case 0x147294u: goto label_147294;
        case 0x1472e8u: goto label_1472e8;
        default: break;
    }

    ctx->pc = 0x14724cu;

    // 0x14724c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14724cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x147250: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147254: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x147254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x147258: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x147258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x14725c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x14725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x147260: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x147260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x147264: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x147264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x147268: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x147268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x14726c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x147270: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x147270u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x147274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x147274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147278: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x147278u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x14727c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14727cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147280: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x147280u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x147284: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x147284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147288: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x147288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x14728c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x14728Cu;
    SET_GPR_U32(ctx, 31, 0x147294u);
    ctx->pc = 0x147290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14728Cu;
    // 0x147290: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x14728Cu, 0x147294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147294u;
label_147294:
    // 0x147294: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x147294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147298: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x147298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x14729c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x14729cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1472a0: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x1472a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1472a4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1472a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1472a8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1472ac: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1472acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1472b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1472b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1472b4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1472b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1472b8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1472b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1472bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1472bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1472c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1472c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1472c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1472c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1472c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1472c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1472cc: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1472ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1472d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1472d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1472d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1472d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1472d8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1472d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1472dc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1472dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1472e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1472E0u;
    SET_GPR_U32(ctx, 31, 0x1472E8u);
    ctx->pc = 0x1472E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472E0u;
    // 0x1472e4: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1472E0u, 0x1472E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472E8u;
label_1472e8:
    // 0x1472e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1472e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1472ec: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1472ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x1472f0u;
}
