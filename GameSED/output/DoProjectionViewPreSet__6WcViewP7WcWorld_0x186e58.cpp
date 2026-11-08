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

// Function: DoProjectionViewPreSet__6WcViewP7WcWorld
// Address: 0x186e58 - 0x1870ac
void DoProjectionViewPreSet__6WcViewP7WcWorld_0x186e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoProjectionViewPreSet__6WcViewP7WcWorld_0x186e58");
#endif

    switch (ctx->pc) {
        case 0x186e84u: goto label_186e84;
        case 0x186f94u: goto label_186f94;
        case 0x186fa0u: goto label_186fa0;
        case 0x186fd8u: goto label_186fd8;
        case 0x187004u: goto label_187004;
        case 0x187010u: goto label_187010;
        case 0x187030u: goto label_187030;
        case 0x187038u: goto label_187038;
        case 0x187070u: goto label_187070;
        default: break;
    }

    ctx->pc = 0x186e58u;

    // 0x186e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186e5c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x186e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x186e60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x186e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x186e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x186e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x186e6c: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x186e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
    // 0x186e70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x186e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x186e74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x186e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x186e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x186e7c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x186E7Cu;
    SET_GPR_U32(ctx, 31, 0x186E84u);
    ctx->pc = 0x186E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E7Cu;
    // 0x186e80: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x186E7Cu, 0x186E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E84u;
label_186e84:
    // 0x186e84: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x186e84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186e88: 0x9e030178  lwu         $v1, 0x178($s0)
    ctx->pc = 0x186e88u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x186e8c: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x186e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x186e90: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x186e90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x186e94: 0x35080020  ori         $t0, $t0, 0x20
    ctx->pc = 0x186e94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x186e98: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x186e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x186e9c: 0xae290004  sw          $t1, 0x4($s1)
    ctx->pc = 0x186e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 9));
    // 0x186ea0: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x186ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x186ea4: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x186ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x186ea8: 0x354a0010  ori         $t2, $t2, 0x10
    ctx->pc = 0x186ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16);
    // 0x186eac: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x186eb0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x186eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x186eb4: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x186eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x186eb8: 0x35080030  ori         $t0, $t0, 0x30
    ctx->pc = 0x186eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)48);
    // 0x186ebc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x186ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x186ec0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x186ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x186ec4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x186ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x186ec8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x186EC8u;
    {
        const bool branch_taken_0x186ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EC8u;
        // 0x186ecc: 0x10a1023  subu        $v0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ec8) {
            ctx->pc = 0x186F30u;
            goto label_186f30;
        }
    }
    ctx->pc = 0x186ED0u;
    // 0x186ed0: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x186ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x186ed4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x186ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x186ed8: 0x8e0601a8  lw          $a2, 0x1A8($s0)
    ctx->pc = 0x186ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x186edc: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x186edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x186ee0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x186ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186ee4: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x186ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x186ee8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x186ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x186eec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186ef0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x186ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x186ef4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x186ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x186ef8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x186ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x186efc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x186efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186f00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x186f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x186f04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x186f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x186f08: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x186f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x186f0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x186f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x186f10: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x186f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x186f14: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x186f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x186f18: 0xfd070008  sd          $a3, 0x8($t0)
    ctx->pc = 0x186f18u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 7));
    // 0x186f1c: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x186f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x186f20: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x186f20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x186f24: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x186f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x186f28: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x186f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x186f2c: 0x10a1023  subu        $v0, $t0, $t2
    ctx->pc = 0x186f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_186f30:
    // 0x186f30: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x186f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x186f34: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x186f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x186f38: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x186f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x186f3c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x186f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x186f40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186f44: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x186f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x186f48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x186f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x186f4c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186f50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x186f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x186f54: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x186f54u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x186f58: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x186f58u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x186f5c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x186f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x186f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x186f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x186f64: 0x2484d000  addiu       $a0, $a0, -0x3000
    ctx->pc = 0x186f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955008));
    // 0x186f68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x186f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186f6c: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x186f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x186f70: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x186f70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x186f74: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x186f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186f78: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x186f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x186f7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186f80: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x186F80u;
    {
        const bool branch_taken_0x186f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F80u;
        // 0x186f84: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f80) {
            ctx->pc = 0x186FA8u;
            goto label_186fa8;
        }
    }
    ctx->pc = 0x186F88u;
    // 0x186f88: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x186f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x186f8c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x186F8Cu;
    SET_GPR_U32(ctx, 31, 0x186F94u);
    ctx->pc = 0x186F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F8Cu;
    // 0x186f90: 0x24847ef0  addiu       $a0, $a0, 0x7EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x186F8Cu, 0x186F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F94u;
label_186f94:
    // 0x186f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f98: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x186F98u;
    SET_GPR_U32(ctx, 31, 0x186FA0u);
    ctx->pc = 0x186F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F98u;
    // 0x186f9c: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x186F98u, 0x186FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FA0u;
label_186fa0:
    // 0x186fa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186FA0u;
    {
        const bool branch_taken_0x186fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FA0u;
        // 0x186fa4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fa0) {
            ctx->pc = 0x186FB0u;
            goto label_186fb0;
        }
    }
    ctx->pc = 0x186FA8u;
label_186fa8:
    // 0x186fa8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x186fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x186fac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x186facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_186fb0:
    // 0x186fb0: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x186fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x186fb4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x186fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x186fb8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x186fbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x186fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x186fc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x186fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x186fc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x186fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x186fc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x186fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x186fcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x186fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186fd0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x186FD0u;
    SET_GPR_U32(ctx, 31, 0x186FD8u);
    ctx->pc = 0x186FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186FD0u;
    // 0x186fd4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x186FD0u, 0x186FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FD8u;
label_186fd8:
    // 0x186fd8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x186fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186fdc: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x186fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x186fe0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x186fe4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x186fe8: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x186fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x186fec: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x186fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x186ff0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x186ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x186ff4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x186ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x186ff8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x186ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x186ffc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x186FFCu;
    SET_GPR_U32(ctx, 31, 0x187004u);
    ctx->pc = 0x187000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186FFCu;
    // 0x187000: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x186FFCu, 0x187004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187004u;
label_187004:
    // 0x187004: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x187004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x187008: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x18700c: 0x0  nop
    ctx->pc = 0x18700cu;
    // NOP
label_187010:
    // 0x187010: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187014: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x187014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x187018: 0x0  nop
    ctx->pc = 0x187018u;
    // NOP
    // 0x18701c: 0x0  nop
    ctx->pc = 0x18701cu;
    // NOP
    // 0x187020: 0x0  nop
    ctx->pc = 0x187020u;
    // NOP
    // 0x187024: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187024u;
    {
        const bool branch_taken_0x187024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187024) {
            ctx->pc = 0x187010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187010;
        }
    }
    ctx->pc = 0x18702Cu;
    // 0x18702c: 0x0  nop
    ctx->pc = 0x18702cu;
    // NOP
label_187030:
    // 0x187030: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x187030u;
    SET_GPR_U32(ctx, 31, 0x187038u);
    ctx->pc = 0x187034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187030u;
    // 0x187034: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187030u, 0x187038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187038u;
label_187038:
    // 0x187038: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x18703c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18703Cu;
    {
        const bool branch_taken_0x18703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18703Cu;
        // 0x187040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18703c) {
            ctx->pc = 0x187030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187030;
        }
    }
    ctx->pc = 0x187044u;
    // 0x187044: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x187044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187048: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x187048u;
    {
        const bool branch_taken_0x187048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187048u;
        // 0x18704c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187048) {
            ctx->pc = 0x187068u;
            goto label_187068;
        }
    }
    ctx->pc = 0x187050u;
    // 0x187050: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x187054: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x187054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x187058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18705c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x18705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x187060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187060u;
    {
        const bool branch_taken_0x187060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187060u;
        // 0x187064: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187060) {
            ctx->pc = 0x187070u;
            goto label_187070;
        }
    }
    ctx->pc = 0x187068u;
label_187068:
    // 0x187068: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x187068u;
    SET_GPR_U32(ctx, 31, 0x187070u);
    ctx->pc = 0x18706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187068u;
    // 0x18706c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x187068u, 0x187070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187070u;
label_187070:
    // 0x187070: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x187074: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x187074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x187078: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x187078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18707c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187080: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x187084: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x187084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x187088: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x187088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18708c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18708cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187090: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x187090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x187094: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x187094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187098: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x187098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x18709c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1870a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1870a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1870a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1870A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870A4u;
        // 0x1870a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1870A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1870ACu;
}
