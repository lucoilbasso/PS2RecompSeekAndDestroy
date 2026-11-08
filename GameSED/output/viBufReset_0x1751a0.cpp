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

// Function: viBufReset
// Address: 0x1751a0 - 0x175300
void viBufReset_0x1751a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufReset_0x1751a0");
#endif

    switch (ctx->pc) {
        case 0x1751e8u: goto label_1751e8;
        case 0x175248u: goto label_175248;
        case 0x175270u: goto label_175270;
        case 0x1752a4u: goto label_1752a4;
        case 0x1752e4u: goto label_1752e4;
        default: break;
    }

    ctx->pc = 0x1751a0u;

    // 0x1751a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1751a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1751a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1751a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1751a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1751a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1751ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1751acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1751b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1751b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1751b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1751b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1751bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1751bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1751c0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1751c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1751c4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1751c8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1751c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1751cc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1751ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1751d0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1751d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1751d4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1751d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1751d8: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1751D8u;
    {
        const bool branch_taken_0x1751d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1751DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751D8u;
        // 0x1751dc: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751d8) {
            ctx->pc = 0x17522Cu;
            goto label_17522c;
        }
    }
    ctx->pc = 0x1751E0u;
    // 0x1751e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1751e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1751e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1751e8:
    // 0x1751e8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1751e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1751ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1751ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1751f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1751f4: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1751f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1751f8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1751f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1751fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1751fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175200: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x175200u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x175204: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x175204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x175208: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17520c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x17520cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x175210: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x175214: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x175214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x175218: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x175218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17521c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x17521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x175220: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175224: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x175224u;
    {
        const bool branch_taken_0x175224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175224u;
        // 0x175228: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175224) {
            ctx->pc = 0x1751E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1751e8;
        }
    }
    ctx->pc = 0x17522Cu;
label_17522c:
    // 0x17522c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175230: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x175230u;
    {
        const bool branch_taken_0x175230 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x175234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175230u;
        // 0x175234: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175230) {
            ctx->pc = 0x175280u;
            goto label_175280;
        }
    }
    ctx->pc = 0x175238u;
    // 0x175238: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x175238u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x17523c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x17523cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x175240: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175244: 0x0  nop
    ctx->pc = 0x175244u;
    // NOP
label_175248:
    // 0x175248: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x17524c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175250: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x175250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175254: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x175254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175258: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17525c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175260: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x175260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x175264: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x175264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x175268: 0xc05d440  jal         func_175100
    ctx->pc = 0x175268u;
    SET_GPR_U32(ctx, 31, 0x175270u);
    ctx->pc = 0x17526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175268u;
    // 0x17526c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x175268u, 0x175270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175270u;
label_175270:
    // 0x175270: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x175270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175274: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175278: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x175278u;
    {
        const bool branch_taken_0x175278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175278) {
            ctx->pc = 0x17527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175278u;
            // 0x17527c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175248;
        }
    }
    ctx->pc = 0x175280u;
label_175280:
    // 0x175280: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x175280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175284: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x175288: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x175288u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x17528c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175290: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x175290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x175294: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x175294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x175298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17529c: 0xc05d440  jal         func_175100
    ctx->pc = 0x17529Cu;
    SET_GPR_U32(ctx, 31, 0x1752A4u);
    ctx->pc = 0x1752A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17529Cu;
    // 0x1752a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175100u, 0x17529Cu, 0x1752A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752A4u;
label_1752a4:
    // 0x1752a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1752a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1752a8: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1752a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x1752ac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1752b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1752b0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1752b4: 0x34a5b410  ori         $a1, $a1, 0xB410
    ctx->pc = 0x1752b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46096);
    // 0x1752b8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1752b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1752bc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1752bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1752c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1752c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1752c4: 0x34c6b430  ori         $a2, $a2, 0xB430
    ctx->pc = 0x1752c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46128);
    // 0x1752c8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1752c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1752cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1752ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1752d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1752d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1752d4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1752d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1752d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1752d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1752dc: 0xc05d426  jal         func_175098
    ctx->pc = 0x1752DCu;
    SET_GPR_U32(ctx, 31, 0x1752E4u);
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x1752DCu, 0x1752E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752E4u;
label_1752e4:
    // 0x1752e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1752e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1752e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1752e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1752ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1752ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1752f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1752f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1752f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1752f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1752F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1752FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752F8u;
        // 0x1752fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1752F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175300u;
}
