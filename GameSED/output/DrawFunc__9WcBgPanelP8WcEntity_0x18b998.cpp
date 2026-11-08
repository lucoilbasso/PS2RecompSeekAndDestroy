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

// Function: DrawFunc__9WcBgPanelP8WcEntity
// Address: 0x18b998 - 0x18c424
void DrawFunc__9WcBgPanelP8WcEntity_0x18b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9WcBgPanelP8WcEntity_0x18b998");
#endif

    switch (ctx->pc) {
        case 0x18ba68u: goto label_18ba68;
        case 0x18bab4u: goto label_18bab4;
        case 0x18bc60u: goto label_18bc60;
        case 0x18bc6cu: goto label_18bc6c;
        case 0x18bd78u: goto label_18bd78;
        case 0x18be48u: goto label_18be48;
        case 0x18c2a8u: goto label_18c2a8;
        case 0x18c2ecu: goto label_18c2ec;
        case 0x18c2f8u: goto label_18c2f8;
        case 0x18c330u: goto label_18c330;
        case 0x18c35cu: goto label_18c35c;
        case 0x18c368u: goto label_18c368;
        case 0x18c388u: goto label_18c388;
        case 0x18c390u: goto label_18c390;
        case 0x18c3c8u: goto label_18c3c8;
        default: break;
    }

    ctx->pc = 0x18b998u;

    // 0x18b998: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x18b998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x18b99c: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x18b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x18b9a0: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x18b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x18b9a4: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x18b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x18b9a8: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x18b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x18b9ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18b9acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b9b0: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x18b9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x18b9b4: 0x269601a0  addiu       $s6, $s4, 0x1A0
    ctx->pc = 0x18b9b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
    // 0x18b9b8: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x18b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x18b9bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x18b9bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b9c0: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x18b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x18b9c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x18b9c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b9c8: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x18b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x18b9cc: 0x26910150  addiu       $s1, $s4, 0x150
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x18b9d0: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x18b9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x18b9d4: 0x269201c0  addiu       $s2, $s4, 0x1C0
    ctx->pc = 0x18b9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    // 0x18b9d8: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x18b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x18b9dc: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x18b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x18b9e0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x18b9e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x18b9e4: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x18b9e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x18b9e8: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x18b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x18b9ec: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x18b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18b9f0: 0xafa50084  sw          $a1, 0x84($sp)
    ctx->pc = 0x18b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
    // 0x18b9f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x18b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x18b9f8: 0x8ed3000c  lw          $s3, 0xC($s6)
    ctx->pc = 0x18b9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x18b9fc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x18b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x18ba00: 0xc6340060  lwc1        $f20, 0x60($s1)
    ctx->pc = 0x18ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18ba04: 0xc6350064  lwc1        $f21, 0x64($s1)
    ctx->pc = 0x18ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18ba08: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x18ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x18ba0c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x18ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x18ba10: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x18ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x18ba14: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x18ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x18ba18: 0x96c60004  lhu         $a2, 0x4($s6)
    ctx->pc = 0x18ba18u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x18ba1c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x18ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x18ba20: 0x96c50006  lhu         $a1, 0x6($s6)
    ctx->pc = 0x18ba20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x18ba24: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x18BA24u;
    {
        const bool branch_taken_0x18ba24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA24u;
        // 0x18ba28: 0xafa500a4  sw          $a1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba24) {
            ctx->pc = 0x18BAA4u;
            goto label_18baa4;
        }
    }
    ctx->pc = 0x18BA2Cu;
    // 0x18ba2c: 0xafb4008c  sw          $s4, 0x8C($sp)
    ctx->pc = 0x18ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 20));
    // 0x18ba30: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18ba34: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x18ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x18ba38: 0x8e860208  lw          $a2, 0x208($s4)
    ctx->pc = 0x18ba38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 520)));
    // 0x18ba3c: 0x8e830228  lw          $v1, 0x228($s4)
    ctx->pc = 0x18ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 552)));
    // 0x18ba40: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x18ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x18ba44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x18ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18ba48: 0x8e82020c  lw          $v0, 0x20C($s4)
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
    // 0x18ba4c: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BA4Cu;
    {
        const bool branch_taken_0x18ba4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA4Cu;
        // 0x18ba50: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba4c) {
            ctx->pc = 0x18BAA4u;
            goto label_18baa4;
        }
    }
    ctx->pc = 0x18BA54u;
    // 0x18ba54: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18ba58: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18BA58u;
    {
        const bool branch_taken_0x18ba58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ba58) {
            ctx->pc = 0x18BA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BA58u;
            // 0x18ba5c: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BA90u;
            goto label_18ba90;
        }
    }
    ctx->pc = 0x18BA60u;
    // 0x18ba60: 0xc063898  jal         func_18E260
    ctx->pc = 0x18BA60u;
    SET_GPR_U32(ctx, 31, 0x18BA68u);
    ctx->pc = 0x18E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E260u, 0x18BA60u, 0x18BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA68u;
label_18ba68:
    // 0x18ba68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ba6c: 0x8fb4008c  lw          $s4, 0x8C($sp)
    ctx->pc = 0x18ba6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x18ba70: 0x8e970218  lw          $s7, 0x218($s4)
    ctx->pc = 0x18ba70u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x18ba74: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x18ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x18ba78: 0x8e840250  lw          $a0, 0x250($s4)
    ctx->pc = 0x18ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x18ba7c: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x18ba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
    // 0x18ba80: 0x8e850258  lw          $a1, 0x258($s4)
    ctx->pc = 0x18ba80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 600)));
    // 0x18ba84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18BA84u;
    {
        const bool branch_taken_0x18ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA84u;
        // 0x18ba88: 0xafa5009c  sw          $a1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba84) {
            ctx->pc = 0x18BAA4u;
            goto label_18baa4;
        }
    }
    ctx->pc = 0x18BA8Cu;
    // 0x18ba8c: 0x0  nop
    ctx->pc = 0x18ba8cu;
    // NOP
label_18ba90:
    // 0x18ba90: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x18ba94: 0x8cd70218  lw          $s7, 0x218($a2)
    ctx->pc = 0x18ba94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x18ba98: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x18ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x18ba9c: 0x8cc30258  lw          $v1, 0x258($a2)
    ctx->pc = 0x18ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
    // 0x18baa0: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x18baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_18baa4:
    // 0x18baa4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18baa8: 0x24a5d640  addiu       $a1, $a1, -0x29C0
    ctx->pc = 0x18baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956608));
    // 0x18baac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18BAACu;
    SET_GPR_U32(ctx, 31, 0x18BAB4u);
    ctx->pc = 0x18BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAACu;
    // 0x18bab0: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18BAACu, 0x18BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAB4u;
label_18bab4:
    // 0x18bab4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x18bab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x18bab8: 0x24c6d640  addiu       $a2, $a2, -0x29C0
    ctx->pc = 0x18bab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
    // 0x18babc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x18babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18bac0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x18bac0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x21D640u));
    // 0x18bac4: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x18bac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18bac8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x18bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18bacc: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x18baccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x18bad0: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x18bad0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x18bad4: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x18bad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x18bad8: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x18bad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x21D644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D644u, _value); } while (0);
    // 0x18badc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x18badcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x18bae0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x18bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x18bae4: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x18bae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
    // 0x18bae8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18baec: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x18baecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x18baf0: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x18baf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x18baf4: 0x36100050  ori         $s0, $s0, 0x50
    ctx->pc = 0x18baf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)80);
    // 0x18baf8: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x18bafc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x18bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb00: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x18bb00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x18bb04: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x18bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18bb08: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x18bb0c: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x18bb0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x18bb10: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x18bb10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x18bb14: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb18: 0x35290010  ori         $t1, $t1, 0x10
    ctx->pc = 0x18bb18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
    // 0x18bb1c: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x18bb20: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x18bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x18bb24: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x18bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x18bb28: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x18bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x18bb2c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x18bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x18bb30: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18bb30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bb34: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18bb38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BB38u;
    {
        const bool branch_taken_0x18bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB38u;
        // 0x18bb3c: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb38) {
            ctx->pc = 0x18BB90u;
            goto label_18bb90;
        }
    }
    ctx->pc = 0x18BB40u;
    // 0x18bb40: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x18bb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x18bb44: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x18bb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18bb48: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x18bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18bb4c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb50: 0x34630060  ori         $v1, $v1, 0x60
    ctx->pc = 0x18bb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
    // 0x18bb54: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18bb58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18bb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18bb5c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x18bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x18bb60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18bb64: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x18bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18bb68: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x18bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x18bb6c: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x18bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb70: 0x34e70070  ori         $a3, $a3, 0x70
    ctx->pc = 0x18bb70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)112);
    // 0x18bb74: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18bb78: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x18bb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18bb7c: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x18bb7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x18bb80: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18bb80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18bb84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18bb88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18BB88u;
    {
        const bool branch_taken_0x18bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB88u;
        // 0x18bb8c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb88) {
            ctx->pc = 0x18BBCCu;
            goto label_18bbcc;
        }
    }
    ctx->pc = 0x18BB90u;
label_18bb90:
    // 0x18bb90: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x18bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb94: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x18bb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x18bb98: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18bb9c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x18bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18bba0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18bba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18bba4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x18bba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x18bba8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x18bbac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18bbb0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x18bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x18bbb4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x18bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x18bbb8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x18bbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x18bbbc: 0x34e70070  ori         $a3, $a3, 0x70
    ctx->pc = 0x18bbbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)112);
    // 0x18bbc0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18bbc4: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x18bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x18bbc8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_18bbcc:
    // 0x18bbcc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18bbccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bbd0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x18bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18bbd4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x18bbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bbdc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x18bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x18bbe0: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x18bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x18bbe4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x18bbe4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x18bbe8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18bbec: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x18bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x18bbf0: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18bbf4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18bbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18bbf8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x18bbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18bbfc: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x18bbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x18bc00: 0x2091823  subu        $v1, $s0, $t1
    ctx->pc = 0x18bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x18bc04: 0xde260018  ld          $a2, 0x18($s1)
    ctx->pc = 0x18bc04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18bc08: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18bc0c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x18bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18bc10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bc14: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x18bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x18bc18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18bc1c: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x18bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x18bc20: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x18bc24: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x18bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x18bc28: 0xffa200a8  sd          $v0, 0xA8($sp)
    ctx->pc = 0x18bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
    // 0x18bc2c: 0x26950020  addiu       $s5, $s4, 0x20
    ctx->pc = 0x18bc2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x18bc30: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x18bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x18bc34: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x18bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18bc38: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18bc38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bc3c: 0x96a30002  lhu         $v1, 0x2($s5)
    ctx->pc = 0x18bc3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x18bc40: 0xdfa500a8  ld          $a1, 0xA8($sp)
    ctx->pc = 0x18bc40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18bc44: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18bc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18bc48: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x18bc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x18bc4c: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x18bc4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x18bc50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BC50u;
    {
        const bool branch_taken_0x18bc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC50u;
        // 0x18bc54: 0xffa500a8  sd          $a1, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc50) {
            ctx->pc = 0x18BC60u;
            goto label_18bc60;
        }
    }
    ctx->pc = 0x18BC58u;
    // 0x18bc58: 0xc061920  jal         func_186480
    ctx->pc = 0x18BC58u;
    SET_GPR_U32(ctx, 31, 0x18BC60u);
    ctx->pc = 0x18BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC58u;
    // 0x18bc5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18BC58u, 0x18BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC60u;
label_18bc60:
    // 0x18bc60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc64: 0xc061422  jal         func_185088
    ctx->pc = 0x18BC64u;
    SET_GPR_U32(ctx, 31, 0x18BC6Cu);
    ctx->pc = 0x18BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC64u;
    // 0x18bc68: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18BC64u, 0x18BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC6Cu;
label_18bc6c:
    // 0x18bc6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18bc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bc70: 0xafb400b0  sw          $s4, 0xB0($sp)
    ctx->pc = 0x18bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 20));
    // 0x18bc74: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18bc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18bc78: 0xc6260068  lwc1        $f6, 0x68($s1)
    ctx->pc = 0x18bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18bc7c: 0xc629006c  lwc1        $f9, 0x6C($s1)
    ctx->pc = 0x18bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x18bc80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18bc80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bc84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18bc84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18bc88: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18bc88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18bc8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18bc90: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18bc90u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18bc94: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18bc94u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18bc98: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18bc98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18bc9c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18bca0: 0x96c70000  lhu         $a3, 0x0($s6)
    ctx->pc = 0x18bca0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18bca4: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x18bca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18bca8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18bca8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bcac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18bcacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18bcb0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x18bcb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x18bcb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bcb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bcb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18bcb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18bcbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18bcbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18bcc0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18bcc4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18bcc4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18bcc8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18bcc8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18bccc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18bcccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18bcd0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18bcd4: 0x96c60002  lhu         $a2, 0x2($s6)
    ctx->pc = 0x18bcd4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x18bcd8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18bcdc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x18bcdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18bce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18bce4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x18bce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x18bce8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18bce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bcec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18bcecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18bcf0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18bcf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18bcf4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18bcf8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18bcf8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18bcfc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18bcfcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18bd00: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18bd00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18bd04: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x18bd04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x18bd08: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18bd0c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x18bd0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18bd10: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x18bd10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18bd14: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18bd14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18bd18: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18bd1c: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x18bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x18bd20: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x18bd20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bd24: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18bd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18bd28: 0x96c40004  lhu         $a0, 0x4($s6)
    ctx->pc = 0x18bd28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x18bd2c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x18bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x18bd30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18bd30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bd34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18bd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18bd38: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bd3c: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x18bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bd40: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x18bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x18bd44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18bd44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18bd48: 0x18c00147  blez        $a2, . + 4 + (0x147 << 2)
    ctx->pc = 0x18BD48u;
    {
        const bool branch_taken_0x18bd48 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD48u;
        // 0x18bd4c: 0x46020280  add.s       $f10, $f0, $f2 (Delay Slot)
        ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd48) {
            ctx->pc = 0x18C268u;
            goto label_18c268;
        }
    }
    ctx->pc = 0x18BD50u;
    // 0x18bd50: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x18bd50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18bd54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18bd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18bd58: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x18bd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x18bd5c: 0x21bfc  dsll32      $v1, $v0, 15
    ctx->pc = 0x18bd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 15));
    // 0x18bd60: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x18bd64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18bd68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18bd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18bd6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18bd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18bd70: 0xffa300c0  sd          $v1, 0xC0($sp)
    ctx->pc = 0x18bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 3));
    // 0x18bd74: 0x0  nop
    ctx->pc = 0x18bd74u;
    // NOP
label_18bd78:
    // 0x18bd78: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x18bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bd80: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x18bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x18bd84: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18BD84u;
    {
        const bool branch_taken_0x18bd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD84u;
        // 0x18bd88: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd84) {
            ctx->pc = 0x18BDE8u;
            goto label_18bde8;
        }
    }
    ctx->pc = 0x18BD8Cu;
    // 0x18bd8c: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x18bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x18bd90: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BD90u;
    {
        const bool branch_taken_0x18bd90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD90u;
        // 0x18bd94: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd90) {
            ctx->pc = 0x18BDE8u;
            goto label_18bde8;
        }
    }
    ctx->pc = 0x18BD98u;
    // 0x18bd98: 0x8c830254  lw          $v1, 0x254($a0)
    ctx->pc = 0x18bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x18bd9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18bda0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18bda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bda4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18bda8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bdac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x18bdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bdb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18BDB0u;
    {
        const bool branch_taken_0x18bdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDB0u;
        // 0x18bdb4: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdb0) {
            ctx->pc = 0x18BDC0u;
            goto label_18bdc0;
        }
    }
    ctx->pc = 0x18BDB8u;
    // 0x18bdb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18BDB8u;
    {
        const bool branch_taken_0x18bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDB8u;
        // 0x18bdbc: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdb8) {
            ctx->pc = 0x18BDD4u;
            goto label_18bdd4;
        }
    }
    ctx->pc = 0x18BDC0u;
label_18bdc0:
    // 0x18bdc0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18bdc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bdc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18BDC4u;
    {
        const bool branch_taken_0x18bdc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18bdc4) {
            ctx->pc = 0x18BDD4u;
            goto label_18bdd4;
        }
    }
    ctx->pc = 0x18BDCCu;
    // 0x18bdcc: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x18bdccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bdd0: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x18bdd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_18bdd4:
    // 0x18bdd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18bdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bdd8: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x18bdd8u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x18bddc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bde0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18bde0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18bde4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x18bde4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18bde8:
    // 0x18bde8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x18bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18bdec: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x18bdecu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdf0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18bdf4: 0x2f7300b  movn        $a2, $s7, $s7
    ctx->pc = 0x18bdf4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
    // 0x18bdf8: 0xafb30088  sw          $s3, 0x88($sp)
    ctx->pc = 0x18bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 19));
    // 0x18bdfc: 0x1840010a  blez        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x18BDFCu;
    {
        const bool branch_taken_0x18bdfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDFCu;
        // 0x18be00: 0xafa60090  sw          $a2, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdfc) {
            ctx->pc = 0x18C228u;
            goto label_18c228;
        }
    }
    ctx->pc = 0x18BE04u;
    // 0x18be04: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x18be04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18be08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18be08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18be0c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x18be0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x18be10: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18be14: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18be14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18be18: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x18be18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18be1c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x18be1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x18be20: 0xffa200c8  sd          $v0, 0xC8($sp)
    ctx->pc = 0x18be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 2));
    // 0x18be24: 0x2475e750  addiu       $s5, $v1, -0x18B0
    ctx->pc = 0x18be24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960976));
    // 0x18be28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18be28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18be2c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x18be2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x18be30: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x18be30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18be34: 0x8faf00b0  lw          $t7, 0xB0($sp)
    ctx->pc = 0x18be34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18be38: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18be3c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x18be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x18be40: 0x27ae0020  addiu       $t6, $sp, 0x20
    ctx->pc = 0x18be40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18be44: 0x0  nop
    ctx->pc = 0x18be44u;
    // NOP
label_18be48:
    // 0x18be48: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x18be48u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be4c: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BE4Cu;
    {
        const bool branch_taken_0x18be4c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE4Cu;
        // 0x18be50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be4c) {
            ctx->pc = 0x18BE58u;
            goto label_18be58;
        }
    }
    ctx->pc = 0x18BE54u;
    // 0x18be54: 0x96fe0000  lhu         $fp, 0x0($s7)
    ctx->pc = 0x18be54u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_18be58:
    // 0x18be58: 0x33c22000  andi        $v0, $fp, 0x2000
    ctx->pc = 0x18be58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
    // 0x18be5c: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x18BE5Cu;
    {
        const bool branch_taken_0x18be5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE5Cu;
        // 0x18be60: 0xafb000b4  sw          $s0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be5c) {
            ctx->pc = 0x18C164u;
            goto label_18c164;
        }
    }
    ctx->pc = 0x18BE64u;
    // 0x18be64: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x18be64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18be68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18be6c: 0x106200ba  beq         $v1, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x18BE6Cu;
    {
        const bool branch_taken_0x18be6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE6Cu;
        // 0x18be70: 0x33cc00f0  andi        $t4, $fp, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be6c) {
            ctx->pc = 0x18C158u;
            goto label_18c158;
        }
    }
    ctx->pc = 0x18BE74u;
    // 0x18be74: 0x158000b9  bnez        $t4, . + 4 + (0xB9 << 2)
    ctx->pc = 0x18BE74u;
    {
        const bool branch_taken_0x18be74 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE74u;
        // 0x18be78: 0x33c22000  andi        $v0, $fp, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be74) {
            ctx->pc = 0x18C15Cu;
            goto label_18c15c;
        }
    }
    ctx->pc = 0x18BE7Cu;
    // 0x18be7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18be7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be80: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x18be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x18be84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18be84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18be88: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x18be88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x18be8c: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x18be8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18be90: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x18be90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18be94: 0x916d0007  lbu         $t5, 0x7($t3)
    ctx->pc = 0x18be94u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x18be98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18be98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18be9c: 0x86490010  lh          $t1, 0x10($s2)
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x18bea0: 0xc75026  xor         $t2, $a2, $a3
    ctx->pc = 0x18bea0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x18bea4: 0x86480012  lh          $t0, 0x12($s2)
    ctx->pc = 0x18bea4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x18bea8: 0xd302b  sltu        $a2, $zero, $t5
    ctx->pc = 0x18bea8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x18beac: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x18beacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x18beb0: 0xa300b  movn        $a2, $zero, $t2
    ctx->pc = 0x18beb0u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x18beb4: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x18beb4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x18beb8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x18beb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bebc: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x18bebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x18bec0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x18bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x18bec4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18bec8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18becc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18bed0: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x18bed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bed4: 0x15470009  bne         $t2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18BED4u;
    {
        const bool branch_taken_0x18bed4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x18BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BED4u;
        // 0x18bed8: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bed4) {
            ctx->pc = 0x18BEFCu;
            goto label_18befc;
        }
    }
    ctx->pc = 0x18BEDCu;
    // 0x18bedc: 0x81620006  lb          $v0, 0x6($t3)
    ctx->pc = 0x18bedcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x18bee0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x18bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18bee4: 0x706c18c8  pmaxw       $v1, $v1, $t4
    ctx->pc = 0x18bee4u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 12)));
    // 0x18bee8: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x18bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x18beec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18bef0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18bef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18bef4: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x18bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x18bef8: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x18bef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18befc:
    // 0x18befc: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x18befcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18bf00: 0x96460018  lhu         $a2, 0x18($s2)
    ctx->pc = 0x18bf00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x18bf04: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18bf08: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x18bf0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18bf0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18bf10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf18: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x18bf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18bf1c: 0x523c0  sll         $a0, $a1, 15
    ctx->pc = 0x18bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18bf20: 0x9645001a  lhu         $a1, 0x1A($s2)
    ctx->pc = 0x18bf20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x18bf24: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x18bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x18bf28: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x18bf28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x18bf2c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x18bf2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18bf30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf38: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x18bf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18bf3c: 0x81bc0  sll         $v1, $t0, 15
    ctx->pc = 0x18bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x18bf40: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18bf44: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x18bf48: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18bf48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18bf4c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf4cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf50: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf54: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x18bf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18bf58: 0x923c0  sll         $a0, $t1, 15
    ctx->pc = 0x18bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 15));
    // 0x18bf5c: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x18bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x18bf60: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x18bf60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x18bf64: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x18bf64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18bf68: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bf74: 0x33c34000  andi        $v1, $fp, 0x4000
    ctx->pc = 0x18bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16384);
    // 0x18bf78: 0x33c4000f  andi        $a0, $fp, 0xF
    ctx->pc = 0x18bf78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
    // 0x18bf7c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x18bf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x18bf80: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x18bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18bf84: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x18bf84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18bf88: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x18bf88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x18bf8c: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18BF8Cu;
    {
        const bool branch_taken_0x18bf8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF8Cu;
        // 0x18bf90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf8c) {
            ctx->pc = 0x18BFECu;
            goto label_18bfec;
        }
    }
    ctx->pc = 0x18BF94u;
    // 0x18bf94: 0xa625000c  sh          $a1, 0xC($s1)
    ctx->pc = 0x18bf94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x18bf98: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x18bf98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18bf9c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x18bfa0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x18bfa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x18bfa4: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x18bfa4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x18bfa8: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x18bfa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18bfac: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x18bfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18bfb0: 0x96450030  lhu         $a1, 0x30($s2)
    ctx->pc = 0x18bfb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x18bfb4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18bfb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18bfb8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x18bfb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18bfbc: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x18bfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x18bfc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18bfc4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x18bfc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x18bfc8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18bfcc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x18bfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18bfd0: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x18bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x18bfd4: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x18bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x18bfd8: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x18bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x18bfdc: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x18bfdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18bfe0: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x18bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x18bfe4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x18bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x18bfe8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18bfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_18bfec:
    // 0x18bfec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18bfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18bff0: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x18bff0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bff4: 0xd9e40000  lqc2        $vf4, 0x0($t7)
    ctx->pc = 0x18bff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x18bff8: 0xd9e50010  lqc2        $vf5, 0x10($t7)
    ctx->pc = 0x18bff8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x18bffc: 0xd9e60020  lqc2        $vf6, 0x20($t7)
    ctx->pc = 0x18bffcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x18c000: 0xd9e70030  lqc2        $vf7, 0x30($t7)
    ctx->pc = 0x18c000u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 48)));
    // 0x18c004: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18c004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c008: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18c008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c00c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18c00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c010: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18c010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c014: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x18c014u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18c018: 0x15580017  bne         $t2, $t8, . + 4 + (0x17 << 2)
    ctx->pc = 0x18C018u;
    {
        const bool branch_taken_0x18c018 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 24));
        ctx->pc = 0x18C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C018u;
        // 0x18c01c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c018) {
            ctx->pc = 0x18C078u;
            goto label_18c078;
        }
    }
    ctx->pc = 0x18C020u;
    // 0x18c020: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x18c020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x18c024: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x18c024u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c028: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c034: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x18c034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x18c038: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x18c038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x18c03c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18c03cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c040: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18c040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c044: 0x44044000  mfc1        $a0, $f8
    ctx->pc = 0x18c044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c048: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18c048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18c04c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18c04cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18c050: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18c050u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18c054: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18c054u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18c058: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x18c058u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x18c05c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18c05cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18c060: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x18c060u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18c064: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18c064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18c068: 0xf9c20000  sqc2        $vf2, 0x0($t6)
    ctx->pc = 0x18c068u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18c06c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18C06Cu;
    {
        const bool branch_taken_0x18c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C06Cu;
        // 0x18c070: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c06c) {
            ctx->pc = 0x18C08Cu;
            goto label_18c08c;
        }
    }
    ctx->pc = 0x18C074u;
    // 0x18c074: 0x0  nop
    ctx->pc = 0x18c074u;
    // NOP
label_18c078:
    // 0x18c078: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18c078u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18c07c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x18c07cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c080: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18c080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18c084: 0xf9c20000  sqc2        $vf2, 0x0($t6)
    ctx->pc = 0x18c084u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18c088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c08c:
    // 0x18c08c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c090: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x18c094: 0x34a5242e  ori         $a1, $a1, 0x242E
    ctx->pc = 0x18c094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9262);
    // 0x18c098: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x18c098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c09c: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x18c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x18c0a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c0a4: 0xdfa600c8  ld          $a2, 0xC8($sp)
    ctx->pc = 0x18c0a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18c0a8: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x18c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x18c0ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18c0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c0b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c0b8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x18c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18c0bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x18c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0c4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18c0c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c0cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x18c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x18c0d0: 0xe4670004  swc1        $f7, 0x4($v1)
    ctx->pc = 0x18c0d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18c0d4: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x18c0d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18c0d8: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x18c0d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18c0dc: 0xe4470008  swc1        $f7, 0x8($v0)
    ctx->pc = 0x18c0dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18c0e0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18c0e4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x18c0e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c0e8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x18c0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18c0ec: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x18c0ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x18c0f0: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x18c0f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18c0f4: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x18c0f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x18c0f8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18c0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c0fc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18c0fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c100: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18c100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c104: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18c104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c108: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x18c108u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c10c: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x18c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18c110: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x18c110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c114: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c11c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c120: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x18c120u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18c124: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x18c124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18c128: 0xe4670008  swc1        $f7, 0x8($v1)
    ctx->pc = 0x18c128u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18c12c: 0xd9c80000  lqc2        $vf8, 0x0($t6)
    ctx->pc = 0x18c12cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x18c130: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x18c130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18c134: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x18c134u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x18c138: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x18c138u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18c13c: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x18c13cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x18c140: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18c140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c144: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18c144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c148: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18c148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c14c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18c14cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c150: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x18c150u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c154: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x18c154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_18c158:
    // 0x18c158: 0x33c22000  andi        $v0, $fp, 0x2000
    ctx->pc = 0x18c158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
label_18c15c:
    // 0x18c15c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C15Cu;
    {
        const bool branch_taken_0x18c15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C15Cu;
        // 0x18c160: 0x33c28000  andi        $v0, $fp, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c15c) {
            ctx->pc = 0x18C180u;
            goto label_18c180;
        }
    }
    ctx->pc = 0x18C164u;
label_18c164:
    // 0x18c164: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x18c164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c168: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x18c168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c170: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c174: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18C174u;
    {
        const bool branch_taken_0x18c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C174u;
        // 0x18c178: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c174) {
            ctx->pc = 0x18C1ECu;
            goto label_18c1ec;
        }
    }
    ctx->pc = 0x18C17Cu;
    // 0x18c17c: 0x0  nop
    ctx->pc = 0x18c17cu;
    // NOP
label_18c180:
    // 0x18c180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C180u;
    {
        const bool branch_taken_0x18c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C180u;
        // 0x18c184: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c180) {
            ctx->pc = 0x18C198u;
            goto label_18c198;
        }
    }
    ctx->pc = 0x18C188u;
    // 0x18c188: 0x460ba042  mul.s       $f1, $f20, $f11
    ctx->pc = 0x18c188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[11]);
    // 0x18c18c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18C18Cu;
    {
        const bool branch_taken_0x18c18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C18Cu;
        // 0x18c190: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c18c) {
            ctx->pc = 0x18C1ECu;
            goto label_18c1ec;
        }
    }
    ctx->pc = 0x18C194u;
    // 0x18c194: 0x0  nop
    ctx->pc = 0x18c194u;
    // NOP
label_18c198:
    // 0x18c198: 0x33c20f00  andi        $v0, $fp, 0xF00
    ctx->pc = 0x18c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3840);
    // 0x18c19c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C19Cu;
    {
        const bool branch_taken_0x18c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C19Cu;
        // 0x18c1a0: 0x211c2  srl         $v0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c19c) {
            ctx->pc = 0x18C1B8u;
            goto label_18c1b8;
        }
    }
    ctx->pc = 0x18C1A4u;
    // 0x18c1a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c1ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c1b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18C1B0u;
    {
        const bool branch_taken_0x18c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1B0u;
        // 0x18c1b4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1b0) {
            ctx->pc = 0x18C1ECu;
            goto label_18c1ec;
        }
    }
    ctx->pc = 0x18C1B8u;
label_18c1b8:
    // 0x18c1b8: 0x1558000b  bne         $t2, $t8, . + 4 + (0xB << 2)
    ctx->pc = 0x18C1B8u;
    {
        const bool branch_taken_0x18c1b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 24));
        ctx->pc = 0x18C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1B8u;
        // 0x18c1bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1b8) {
            ctx->pc = 0x18C1E8u;
            goto label_18c1e8;
        }
    }
    ctx->pc = 0x18C1C0u;
    // 0x18c1c0: 0x33c21000  andi        $v0, $fp, 0x1000
    ctx->pc = 0x18c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4096);
    // 0x18c1c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C1C4u;
    {
        const bool branch_taken_0x18c1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c1c4) {
            ctx->pc = 0x18C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C1C4u;
            // 0x18c1c8: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C1ECu;
            goto label_18c1ec;
        }
    }
    ctx->pc = 0x18C1CCu;
    // 0x18c1cc: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x18c1ccu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c1d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c1d4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c1d8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x18c1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x18c1dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18c1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c1e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C1E0u;
    {
        const bool branch_taken_0x18c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1E0u;
        // 0x18c1e4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1e0) {
            ctx->pc = 0x18C1F0u;
            goto label_18c1f0;
        }
    }
    ctx->pc = 0x18C1E8u;
label_18c1e8:
    // 0x18c1e8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x18c1e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_18c1ec:
    // 0x18c1ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18c1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18c1f0:
    // 0x18c1f0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x18c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x18c1f4: 0x14780006  bne         $v1, $t8, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C1F4u;
    {
        const bool branch_taken_0x18c1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x18C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1F4u;
        // 0x18c1f8: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1f4) {
            ctx->pc = 0x18C210u;
            goto label_18c210;
        }
    }
    ctx->pc = 0x18C1FCu;
    // 0x18c1fc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c200: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x18c200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c204: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x18C204u;
    {
        const bool branch_taken_0x18c204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c204) {
            ctx->pc = 0x18C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C204u;
            // 0x18c208: 0x8fb000b4  lw          $s0, 0xB4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C228u;
            goto label_18c228;
        }
    }
    ctx->pc = 0x18C20Cu;
    // 0x18c20c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x18c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_18c210:
    // 0x18c210: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x18c210u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x18c214: 0x26e20002  addiu       $v0, $s7, 0x2
    ctx->pc = 0x18c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x18c218: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x18c21c: 0x324182a  slt         $v1, $t9, $a0
    ctx->pc = 0x18c21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18c220: 0x1460ff09  bnez        $v1, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x18C220u;
    {
        const bool branch_taken_0x18c220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C220u;
        // 0x18c224: 0x57b80b  movn        $s7, $v0, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c220) {
            ctx->pc = 0x18BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18be48;
        }
    }
    ctx->pc = 0x18C228u;
label_18c228:
    // 0x18c228: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x18c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c22c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x18c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18c230: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x18c230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x18c234: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x18c234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x18c238: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x18c238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18c23c: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x18c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x18c240: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x18c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18c244: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18c244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18c248: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x18c248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x18c24c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x18c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18c250: 0xc5202a  slt         $a0, $a2, $a1
    ctx->pc = 0x18c250u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18c254: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x18c254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x18c258: 0x77b80b  movn        $s7, $v1, $s7
    ctx->pc = 0x18c258u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x18c25c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18c25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c260: 0x1480fec5  bnez        $a0, . + 4 + (-0x13B << 2)
    ctx->pc = 0x18C260u;
    {
        const bool branch_taken_0x18c260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C260u;
        // 0x18c264: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c260) {
            ctx->pc = 0x18BD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bd78;
        }
    }
    ctx->pc = 0x18C268u;
label_18c268:
    // 0x18c268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c26c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c270: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x18c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18c274: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x18c274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x18c278: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x18c278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18c27c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x18c27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x18c280: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x18c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x18c284: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x18c284u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x18c288: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x18c288u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x18c28c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x18c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x18c290: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x18c290u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x18c294: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18c298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C298u;
    {
        const bool branch_taken_0x18c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C298u;
        // 0x18c29c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c298) {
            ctx->pc = 0x18C2A8u;
            goto label_18c2a8;
        }
    }
    ctx->pc = 0x18C2A0u;
    // 0x18c2a0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18C2A0u;
    SET_GPR_U32(ctx, 31, 0x18C2A8u);
    ctx->pc = 0x18C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C2A0u;
    // 0x18c2a4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18C2A0u, 0x18C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2A8u;
label_18c2a8:
    // 0x18c2a8: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x18c2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x18c2ac: 0x2631d640  addiu       $s1, $s1, -0x29C0
    ctx->pc = 0x18c2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956608));
    // 0x18c2b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x18c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18c2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c2b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D644u));
    // 0x18c2bc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x18c2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x18c2c0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18c2c4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c2c8: 0x2484d000  addiu       $a0, $a0, -0x3000
    ctx->pc = 0x18c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955008));
    // 0x18c2cc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18c2d0: 0x44202b  sltu        $a0, $v0, $a0
    ctx->pc = 0x18c2d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18c2d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18c2d8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C2D8u;
    {
        const bool branch_taken_0x18c2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2D8u;
        // 0x18c2dc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2d8) {
            ctx->pc = 0x18C300u;
            goto label_18c300;
        }
    }
    ctx->pc = 0x18C2E0u;
    // 0x18c2e0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x18c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x18c2e4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18C2E4u;
    SET_GPR_U32(ctx, 31, 0x18C2ECu);
    ctx->pc = 0x18C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C2E4u;
    // 0x18c2e8: 0x24847fe0  addiu       $a0, $a0, 0x7FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18C2E4u, 0x18C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2ECu;
label_18c2ec:
    // 0x18c2ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2f0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x18C2F0u;
    SET_GPR_U32(ctx, 31, 0x18C2F8u);
    ctx->pc = 0x18C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C2F0u;
    // 0x18c2f4: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x18C2F0u, 0x18C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2F8u;
label_18c2f8:
    // 0x18c2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C2F8u;
    {
        const bool branch_taken_0x18c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F8u;
        // 0x18c2fc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2f8) {
            ctx->pc = 0x18C308u;
            goto label_18c308;
        }
    }
    ctx->pc = 0x18C300u;
label_18c300:
    // 0x18c300: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18c300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18c304: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18c308:
    // 0x18c308: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x18c30c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x18c30cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18c310: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x18c310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x18c314: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18c318: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c31c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18c320: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18c320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18c324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c328: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18C328u;
    SET_GPR_U32(ctx, 31, 0x18C330u);
    ctx->pc = 0x18C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C328u;
    // 0x18c32c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18C328u, 0x18C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C330u;
label_18c330:
    // 0x18c330: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18c334: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x18c334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x18c338: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x18c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x18c33c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18c340: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x18c340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x18c344: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x18c344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x18c348: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18c34c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18c350: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18c350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x18c354: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18C354u;
    SET_GPR_U32(ctx, 31, 0x18C35Cu);
    ctx->pc = 0x18C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C354u;
    // 0x18c358: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18C354u, 0x18C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C35Cu;
label_18c35c:
    // 0x18c35c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18c360: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18c360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x18c364: 0x0  nop
    ctx->pc = 0x18c364u;
    // NOP
label_18c368:
    // 0x18c368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c36c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18c36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18c370: 0x0  nop
    ctx->pc = 0x18c370u;
    // NOP
    // 0x18c374: 0x0  nop
    ctx->pc = 0x18c374u;
    // NOP
    // 0x18c378: 0x0  nop
    ctx->pc = 0x18c378u;
    // NOP
    // 0x18c37c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18C37Cu;
    {
        const bool branch_taken_0x18c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c37c) {
            ctx->pc = 0x18C368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c368;
        }
    }
    ctx->pc = 0x18C384u;
    // 0x18c384: 0x0  nop
    ctx->pc = 0x18c384u;
    // NOP
label_18c388:
    // 0x18c388: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x18C388u;
    SET_GPR_U32(ctx, 31, 0x18C390u);
    ctx->pc = 0x18C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C388u;
    // 0x18c38c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x18C388u, 0x18C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C390u;
label_18c390:
    // 0x18c390: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x18c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x18c394: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18C394u;
    {
        const bool branch_taken_0x18c394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C394u;
        // 0x18c398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c394) {
            ctx->pc = 0x18C388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c388;
        }
    }
    ctx->pc = 0x18C39Cu;
    // 0x18c39c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18c39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18c3a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C3A0u;
    {
        const bool branch_taken_0x18c3a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3A0u;
        // 0x18c3a4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3a0) {
            ctx->pc = 0x18C3C0u;
            goto label_18c3c0;
        }
    }
    ctx->pc = 0x18C3A8u;
    // 0x18c3a8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x18c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18c3ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18c3b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c3b4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x18c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x18c3b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C3B8u;
    {
        const bool branch_taken_0x18c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3B8u;
        // 0x18c3bc: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3b8) {
            ctx->pc = 0x18C3C8u;
            goto label_18c3c8;
        }
    }
    ctx->pc = 0x18C3C0u;
label_18c3c0:
    // 0x18c3c0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x18C3C0u;
    SET_GPR_U32(ctx, 31, 0x18C3C8u);
    ctx->pc = 0x18C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3C0u;
    // 0x18c3c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x18C3C0u, 0x18C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3C8u;
label_18c3c8:
    // 0x18c3c8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x18c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x18c3cc: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18c3d0: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x18c3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x18c3d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c3d8: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x18c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x18c3dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18c3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18c3e0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x18c3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18c3e4: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x18c3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18c3e8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x18c3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x18c3ec: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x18c3ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18c3f0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x18c3f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18c3f4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x18c3f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18c3f8: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x18c3f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18c3fc: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x18c3fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x18c400: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x18c400u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18c404: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x18c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x18c408: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x18c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18c40c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x18c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c410: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x18c410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x18c414: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x18c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x18c418: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18c418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c41c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C41Cu;
        // 0x18c420: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C424u;
}
