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

// Function: entry_0018b9d8
// Address: 0x18b9d8 - 0x18ba90
void entry_0018b9d8_0x18b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b9d8_0x18b9d8");
#endif

    switch (ctx->pc) {
        case 0x18ba68u: goto label_18ba68;
        default: break;
    }

    ctx->pc = 0x18b9d8u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x18BA8Cu;
    // 0x18ba8c: 0x0  nop
    ctx->pc = 0x18ba8cu;
    // NOP
    ctx->pc = 0x18ba90u;
}
